class Solution(object):
    def majorityElement(self, nums):
        # hash={}
        # res=[]
        # for i in nums:
        #     hash[i]=hash.get(i,0)+1
        #     if hash[i]>len(nums)//3 and i not in res:
        #         res.append(i)
        # return res

        c1,c2=0,0
        n1,n2=None,None
        res=[]
        for n in nums:
            if n==n1: c1+=1
            elif n==n2: c2+=1
            elif c1==0:
                n1=n
                c1=1
            elif c2==0:
                n2=n
                c2=1
            else:
                c1-=1
                c2-=1
        n=len(nums)
        if nums.count(n1)>n//3:
            res.append(n1)
        if n2 is not None and n2!=n1 and nums.count(n2)>n//3:
            res.append(n2)
        return res



        """
        :type nums: List[int]
        :rtype: List[int]
        """
        