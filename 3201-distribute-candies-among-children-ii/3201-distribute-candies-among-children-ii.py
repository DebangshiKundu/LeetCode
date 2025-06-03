class Solution:
    def distributeCandies(self, n: int, limit: int) -> int:
        def ncr(n,r):
            if n<0 or r<0 or r>n: return 0
            return math.comb(n,r)
        
        tot=ncr(n+2,2)
        for i in range(3):
            tot-=ncr(n-(limit+1)+2,2) if n-(limit+1)>=0 else 0
        for i in range(3):
            for j in range(i+1,3):
                tot+=ncr(n-2 * (limit+1)+2,2) if n-2 * (limit+1)>=0 else 0
        tot-=ncr(n-3 * (limit+1)+2,2) if n-3 * (limit+1)>=0 else 0
        return tot
        
        