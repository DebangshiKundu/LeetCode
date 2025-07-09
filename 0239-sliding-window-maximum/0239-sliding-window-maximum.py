class Solution(object):
    def maxSlidingWindow(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        res=[]
        deq=deque()

        for i in range(len(nums)):
            while deq and deq[-1]<nums[i]:
                deq.pop()
            deq.append(nums[i])

            if i>=k and nums[i-k]==deq[0]:
                deq.popleft()
            if i>=k-1:
                res.append(deq[0])
        return res
        