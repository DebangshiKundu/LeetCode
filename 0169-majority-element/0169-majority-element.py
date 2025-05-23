class Solution(object):
    def majorityElement(self, nums):
        # rec={}
        # for i in nums:
        #     rec[i]=rec.get(i,0)+1
        #     if rec[i]>len(nums)//2: return i

        # nums.sort()
        # return nums[len(nums)//2]
        no,c= None,0
        for n in nums:
            if no==n: c+=1
            elif c==0:
                no=n
                c=1
            else: c-=1
        return no
        """
        :type nums: List[int]
        :rtype: int
        """



        