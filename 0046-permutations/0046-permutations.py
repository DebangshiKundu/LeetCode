class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        if len(nums) == 1 or 0:
            return [nums[:]]
        res=[]
        for i in range(len(nums)):
            n=nums.pop(0)
            perm=self.permute(nums)
            for p in perm:
                p.append(n)
                res.append(p)
            nums.append(n)
        return res

            
        
        