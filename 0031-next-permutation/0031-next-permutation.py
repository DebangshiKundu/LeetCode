class Solution(object):
    def nextPermutation(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        idx=-1
        for i in range(len(nums)-1):
            if nums[i]<nums[i+1]: idx=i
        if idx==-1:
            nums.reverse()
            return
        for i in range(idx+1,len(nums)):
            if nums[i]>nums[idx]: l=i
        
        nums[idx],nums[l]= nums[l],nums[idx]
        nums[idx+1:]=sorted(nums[idx+1:])
        return