class Solution:
    def trap(self, h: List[int]) -> int:
        l,r=0,len(h)-1
        lm=h[l]
        rm=h[r]
        water=0
        while l<r:
            if lm<rm:
                l+=1
                if h[l]>lm: lm=h[l]
                else: water+=lm-h[l]
            else:
                r-=1
                if h[r]>rm: rm=h[r]
                else: water+=rm-h[r] 
        return water
        