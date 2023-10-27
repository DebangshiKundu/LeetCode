class Solution(object):
    def numSteps(self, s):
        """
        :type s: str
        :rtype: int
        """
        c=0
        while s!='1':
            if s[-1]=='1' :
                i=s.rfind('0')
                if i!=-1:
                    s=s[:i]+'1'+'0'*(len(s)-i-1)
                else:
                    s='1'+'0'*len(s)
            else:
                s=s[:-1]
            c+=1
        return c
                
                
        
        