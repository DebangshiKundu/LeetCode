class Solution(object):
    def uniquePaths(self, m, n):
        g=[[None] * n for _ in range(m)]
        def count(m,n):
            if m==0: return 1
            if n==0: return 1
            if g[m][n] is not None: return g[m][n]
            r1=count(m,n-1)
            r2=count(m-1,n)
            g[m][n]=r1+r2
            return r1+r2
        ans=count(m-1,n-1)

        return ans
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        