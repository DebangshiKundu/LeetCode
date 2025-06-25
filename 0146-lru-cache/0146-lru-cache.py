class LRUCache:

    def __init__(self, capacity: int):
        self.deque=OrderedDict()
        self.cap=capacity

    def get(self, key: int) -> int:
        if key not in self.deque:
            return -1
        self.deque.move_to_end(key)
        return self.deque[key]

    def put(self, key: int, value: int) -> None:
        if key in self.deque:
            self.deque.move_to_end(key)
        self.deque[key]=value
        if len(self.deque)> self.cap:
            self.deque.popitem(last=False)
        
        


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)