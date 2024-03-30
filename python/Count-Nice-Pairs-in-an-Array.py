# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/count-nice-pairs-in-an-array/description/

class Solution:
    def countNicePairs(self, nums: List[int]) -> int:
        out = 0
        mod_val = 10**9 + 7

        reversed_nums = [int(str(s)[::-1]) for s in nums]
        diffs = [(nums[i] - reversed_nums[i]) for i in range(len(nums))]

        frq_count=Counter(diffs)
        count=list(frq_count.values())
        out=0

        for n in count:
            out+=(n*(n-1))//2
        
        return out%mod_val
    
    

