class Solution:
    def numberOfWays(self, corridor):
        n = 0
        p = 0
        res = 1
        mod = 1000000007
        
        for i in corridor:
            if i == 'S':
                n += 1
            if n == 2 and i == 'P':
                p += 1
            if n == 3:
                res *= (p + 1)
                res %= mod
                n = 1
                p = 0
        
        if n < 2: return 0
        return res
