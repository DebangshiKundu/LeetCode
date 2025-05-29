class Solution(object):
    def longestConsecutive(self, nums):
        num = set(nums)
        maxi = 0
        for n in num:
            if n - 1 not in num:
                count = 1
                while n + count in num:
                    count += 1
                maxi = max(maxi, count)
        return maxi
  

        
        """
        :type nums: List[int]
        :rtype: int
        """
        