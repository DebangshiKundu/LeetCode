class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i=0
        for n in range(len(nums)):
            if n==0 or nums[n]!=nums[i-1]:
                nums[i]=nums[n]
                i+=1
        return i
        