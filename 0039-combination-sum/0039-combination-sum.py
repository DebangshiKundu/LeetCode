class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        res=[]
        def make_comb(idx,comb,t):
            if t==target:
                res.append(comb[:])
                return
            elif t>target or idx>=len(candidates):
                return
            else:
                comb.append(candidates[idx])
                make_comb(idx,comb,t+candidates[idx])
                comb.pop()
                make_comb(idx+1,comb,t)

        make_comb(0,[],0)
        return res