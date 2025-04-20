class Solution:
    def countFairPairs(self, nums: List[int], lower: int, upper: int) -> int:
        out=0
        nums.sort()
        for i in range(len(nums)):
            l=bisect_left(nums,lower-nums[i],i+1)
            r=bisect_right(nums,upper-nums[i],i+1)
            out+=r-l
        return out

        