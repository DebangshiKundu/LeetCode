class Solution:
    def maxProfit(self, nums: List[int]) -> int:
        # mx,mn=0,0
        # for i in range(len(nums)):
        #     for j in range(i,len(nums)):
        #         mx=max(nums[j]-nums[i],mx)
        # if mx<0:return 0
        # else: return mx

        mx,mn=0,nums[0]
        for i in range(len(nums)):
            mn=min(mn,nums[i])
            mx=max(mx,nums[i]-mn)
        return mx
            




