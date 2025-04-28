class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        out,s=0,0
        j=0
        for i in range(len(nums)):
            s+=nums[i]
            while j<=i and s*(i-j+1)>=k:
                s-=nums[j]
                j+=1
            out+=(i-j+1)
        return out
        