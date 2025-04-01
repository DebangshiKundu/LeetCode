class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        s1,s2,s0=0,0,0
        for i in range(len(nums)):
            if nums[i]==0: s0+=1
            elif nums[i]==1: s1+=1
            else: s2+=1

        for i in range(s0):
            nums[i]=0
        for i in range(s0,s0+s1):
            nums[i]=1
        for i in range(s0+s1,len(nums)):
            nums[i]=2
        