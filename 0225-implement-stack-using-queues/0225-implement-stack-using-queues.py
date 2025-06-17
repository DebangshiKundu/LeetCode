class MyStack:

    def __init__(self):
        self.nums=[]
        self.n=0

    def push(self, x: int) -> None:
        self.nums.append(x)
        self.n+=1
    def pop(self) -> int:
        self.n-=1
        return self.nums.pop(self.n)

    def top(self) -> int:
        return self.nums[self.n-1]

    def empty(self) -> bool:
        if self.n==0: return True
        else: return False
            


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()