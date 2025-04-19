// https://leetcode.com/problems/find-all-possible-recipes-from-given-supplies/description/
class Solution {
public:
    bool checkIfIngredientInSupplies(vector<string>& supplies, string& ingredient){
        for (auto supply : supplies){
            if (supply == ingredient){
                return true;
            }
        }
        return false;
    }
    int checkIfIngredientIsRecipe(vector<string>& recipes, string& ingredient){
        for (int i = 0; i<recipes.size(); i++){
            if (recipes[i] == ingredient){
                return i;
            }
        }
        return -1;
    }

    bool checkCraftability(vector<vector<string>>& ingredients, vector<string>& recipes, vector<string>& supplies, int& index, map<string, int>& crafting_map){
        int ingredientIsRecipeIndex;
        bool craftable;
        bool suppliable;
        bool ans = true;
        if (crafting_map.count(recipes[index])){
            if (crafting_map[recipes[index]] == 2) return 0;
            return crafting_map[recipes[index]];
        }
        crafting_map[recipes[index]] = 2;

        for (auto ingredient : ingredients[index]){
            ingredientIsRecipeIndex = checkIfIngredientIsRecipe(recipes, ingredient); 
            if (ingredientIsRecipeIndex>=0){
                craftable = checkCraftability(ingredients, recipes, supplies, ingredientIsRecipeIndex, crafting_map);
                if (!craftable){
                    ans = false;
                } 
            }
            else{
                suppliable = checkIfIngredientInSupplies(supplies, ingredient);
                if (!suppliable) ans = false;
            }
        }
        return crafting_map[recipes[index]] = ans;
    }
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies){  
        int num_recipes = recipes.size();
        vector<string> final_recipes;
        map<string, int> crafting_map;
        for (int i=0; i<num_recipes; i++){
            checkCraftability(ingredients, recipes, supplies, i, crafting_map);
        }
        for (auto element: crafting_map) {
            if (element.second){
                final_recipes.push_back(element.first);
            }
        }
        return final_recipes;

    }
};
