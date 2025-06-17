class MyStack:

    def __init__(self):
        self.n1=deque()
        self.n2=deque()

    def push(self, x: int) -> None:
        self.n2.append(x)
        while self.n1:
            self.n2.append(self.n1.popleft())
        self.n1,self.n2=self.n2,self.n1
        
    def pop(self) -> int:
        return self.n1.popleft()
        
    def top(self) -> int:
        return self.n1[0]

    def empty(self) -> bool:
        if not self.n1: return True
        else: return False
        


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()