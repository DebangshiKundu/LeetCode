class MyQueue:

    def __init__(self):
        self.nums=[]
        self.n=0

    def push(self, x: int) -> None:
        self.nums.append(x)
        self.n+=1

    def pop(self) -> int:
        self.n-=1
        return self.nums.pop(0)

    def peek(self) -> int:
        return self.nums[0]

    def empty(self) -> bool:
        if self.n==0: return True
        else: return False
        


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()