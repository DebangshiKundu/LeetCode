class MyQueue:

    def __init__(self):
        self.n1=[]
        self.n2=[]
    def push(self, x: int) -> None:
        self.n1.append(x)

    def pop(self) -> int:
        if self.n2: return self.n2.pop()
        while self.n1:
            self.n2.append(self.n1.pop())
        return self.n2.pop()

    def peek(self) -> int:
        if self.n2: return self.n2[-1]
        if self.n1: return self.n1[0]


    def empty(self) -> bool:
        if not self.n1 and not self.n2: return True
        else: return False


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()