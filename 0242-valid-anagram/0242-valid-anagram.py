class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        # if len(s)!=len(t): return False
        # maps={}
        # for i in s:
        #     if i not in maps:
        #         maps[i]=0
        #     maps[i]+=1

        # for i in t:
        #     if i not in maps:
        #         return False
        #     maps[i]-=1
        #     if maps[i]==0:
        #         del maps[i]
        # return len(maps)==0

        q1=sorted(set(s))
        q2=sorted(set(t))
        s1=[s.count(i) for i in q1]
        s2=[t.count(j) for j in q1]

        print(sorted(set(s)))
        print(s2)
        return s1==s2 and q1==q2
       
