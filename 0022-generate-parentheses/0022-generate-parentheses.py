class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        def comb(s="",op=0,cl=0):
            if len(s)==2*n:
                res.append(s)
                return
            if op<n:
                comb(s+'(',op+1,cl)
            if cl<op:
                comb(s+')',op,cl+1)
        res=[]
        comb()
        return res
       

        
        