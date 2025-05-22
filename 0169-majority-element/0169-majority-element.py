class Solution(object):
    def majorityElement(self, nums):
        # rec={}
        # for i in nums:
        #     rec[i]=rec.get(i,0)+1
        #     if rec[i]>len(nums)//2: return i

        nums.sort()
        return nums[len(nums)//2]
        """
        :type nums: List[int]
        :rtype: int
        """
        