class MinStack:

    def __init__(self):
        self.stack=[]
        self.mins=[]

    def push(self, val: int) -> None:
        self.stack.append(val)
        if not self.mins:
            self.mins.append(val)
        else:
            self.mins.append(min(val,self.mins[-1]))
        return

    def pop(self) -> None:
        if self.stack:
            self.stack.pop()
            self.mins.pop()
        return
        

    def top(self) -> int:
        if self.stack:
            return self.stack[-1]
        return None

    def getMin(self) -> int:
        return self.mins[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()