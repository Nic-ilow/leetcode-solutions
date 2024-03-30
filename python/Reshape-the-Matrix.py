# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/reshape-the-matrix/description/

class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        if len(mat)*len(mat[0]) != r*c:
            return mat
        else:
            out = []
            flatten = []
            for row in mat:
                flatten += row
            for i in range(len(flatten)//c):
                out.append(flatten[i*c:(i+1)*c])
            
            return out

