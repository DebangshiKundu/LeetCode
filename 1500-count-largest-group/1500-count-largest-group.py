class Solution:
    def countLargestGroup(self, n: int) -> int:
        hmap=defaultdict(int)
        for i in range(1,n+1):
            val=sum(int(d) for d in str(i))
            hmap[val]+=1
        ms=max(hmap.values())
        return sum(1 for c in hmap.values() if c==ms)