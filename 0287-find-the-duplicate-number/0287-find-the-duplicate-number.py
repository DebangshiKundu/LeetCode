class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        n=[0]*len(nums)
        for i in nums:
            n[i]+=1
        for i in range(len(n)):
            if n[i]>1: return i
        