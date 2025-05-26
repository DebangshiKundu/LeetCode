class Solution(object):
    def reversePairs(self, nums):

        l = []
        count = 0

        for num in reversed(nums):
            count += bisect_left(l, num / 2.0)
            insort(l, num)

        return count
        """
        :type nums: List[int]
        :rtype: int
        """
        