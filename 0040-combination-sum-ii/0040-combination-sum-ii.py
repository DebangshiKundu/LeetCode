class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        res=[]
        candidates.sort()
        def make_comb(s,comb,t):
            if t==target:
                res.append(comb[:])
                return
            elif s>=len(candidates) or t>target:
                return

            for idx in range(s,len(candidates)):
                if idx>s and candidates[idx]==candidates[idx-1]: 
                    continue
                if candidates[idx]>target:
                    break
                comb.append(candidates[idx])
                make_comb(idx+1,comb,t+candidates[idx])
                comb.pop()
            
        make_comb(0,[],0)
        return res