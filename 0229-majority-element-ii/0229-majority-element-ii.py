class Solution(object):
    def majorityElement(self, nums):
        hash={}
        res=[]
        for i in nums:
            hash[i]=hash.get(i,0)+1
            if hash[i]>len(nums)//3 and i not in res:
                res.append(i)
        return res
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        