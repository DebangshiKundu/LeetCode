class Solution(object):
    def twoSum(self, nums, target):
        maps={}
        for i,n in enumerate(nums):
            num=target-n
            if num in maps:
                return [maps[num],i]
            maps[n]=i
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        