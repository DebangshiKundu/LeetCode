class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        if len(nums) == 1 or 0:
            return [nums[:]]
        res=[]
        # for i in range(len(nums)):
        #     n=nums.pop(0)
        #     perm=self.permute(nums)
        #     for p in perm:
        #         p.append(n)
        #         res.append(p)
        #     nums.append(n)
        # return res

        def make(start):
            if start==len(nums):
                res.append(nums[:])
                return
            for i in range(start,len(nums)):
                nums[i],nums[start]=nums[start],nums[i]
                make(start+1)
                nums[i],nums[start]=nums[start],nums[i]
        make(0)
        return res

            
        
        