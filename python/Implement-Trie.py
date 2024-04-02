# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/implement-trie-prefix-tree/description/

class Trie:

    def __init__(self):
        self.words = []

    def insert(self, word: str) -> None:
        self.words.append(word)

    def search(self, word: str) -> bool:
        for addedWord in self.words:
            if word == addedWord:
                return True
        return False

    def startsWith(self, prefix: str) -> bool:
        for addedWord in self.words:
            if prefix == addedWord[:len(prefix)]:
                return True
        return False 

# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)
