# Written by Nicholas Ilow
# Solution to https://leetcode.com/problems/implement-stack-using-queues/description/ 

class MyStack:

    def __init__(self):
        self.queue = deque()

    def push(self, x: int) -> None:
        self.queue.append(x)
        for _ in range(len(self.queue) - 1):
            self.queue.append(self.queue.popleft())

    def pop(self) -> int:
        return self.queue.popleft()

    def top(self) ->int:
        return self.queue[0]

    def empty(self) -> bool:
        return len(self.queue) == 0

class MyStackNaive:

    def __init__(self):
        self.stack = []

    def push(self, x: int) -> None:
        self.stack.append(x)

    def pop(self) -> int:
        return self.stack.pop(-1)

    def top(self) -> int:
        return self.stack[-1]

    def empty(self) -> bool:
        if self.stack:
            return False
        return True


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()
