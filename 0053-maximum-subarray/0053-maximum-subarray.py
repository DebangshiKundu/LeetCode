class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        msum,s=nums[0],nums[0]
        for i in range(1,len(nums)):
            s=max(nums[i],s+nums[i])
            msum=max(msum,s)
        return msum
        