class Solution(object):
    def myPow(self, x, n):
        # return pow(x,n)
        def power(x,n):
            if x==0: return 0
            if n==0: return 1

            res=power(x,n//2)
            ans=res*res
            if n%2==1:
                return ans*x
            return ans

        ans=power(x,abs(n))
        if n>=0: return ans
        else: return 1/ans


        """
        :type x: float
        :type n: int
        :rtype: float
        """
        