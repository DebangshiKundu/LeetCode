class LFUCache:

    def __init__(self, capacity: int):
        self.key2val={}
        self.key2freq={}
        self.cap=capacity
        self.freq2key=defaultdict(OrderedDict)
        self.minf=0

    def get(self, key: int) -> int:
        if key not in self.key2val:
            return -1
        old=self.key2freq[key]
        self.key2freq[key]=old+1
        self.freq2key[old].pop(key)
        if not self.freq2key[old]:
            del self.freq2key[old]
        self.freq2key[old+1][key]=1
        if self.minf not in self.freq2key:
            self.minf+=1
        return self.key2val[key]

    def put(self, key: int, value: int) -> None:
        if self.cap<=0 : return
        if key in self.key2val:
            self.get(key)
            self.key2val[key]=value
            return
        if self.cap==len(self.key2val):
            delk,_=self.freq2key[self.minf].popitem(last=False)
            del self.key2val[delk]
            del self.key2freq[delk]
        self.key2val[key]=value
        self.key2freq[key]=1
        self.freq2key[1][key]=1
        self.minf=1


# Your LFUCache object will be instantiated and called as such:
# obj = LFUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)