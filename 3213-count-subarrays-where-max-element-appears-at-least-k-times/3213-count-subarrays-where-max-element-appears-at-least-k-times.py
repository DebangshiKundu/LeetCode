class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        from typing import List

class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        m = max(nums)
        idx = [i for i, val in enumerate(nums) if val == m]
        if len(idx) < k:
            return 0
        idx.append(len(nums))
        res = 0
        j=0
        for i in range(k, len(idx)):
            res+=(idx[j]+1)*(idx[i]-idx[i-1])
            print(res)
            j+=1
        return res


        


        