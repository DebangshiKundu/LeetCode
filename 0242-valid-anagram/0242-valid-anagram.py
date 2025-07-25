class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s)!=len(t): return False
        maps={}
        for i in s:
            if i not in maps:
                maps[i]=0
            maps[i]+=1

        for i in t:
            if i not in maps:
                return False
            maps[i]-=1
            if maps[i]==0:
                del maps[i]
        return len(maps)==0