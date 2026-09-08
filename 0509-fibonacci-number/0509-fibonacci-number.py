class Solution:
    def fib(self, n: int) -> int:
        stack = [0, 1]

        for _ in range(n):
            b = stack.pop()
            a = stack.pop()

            stack.append(b)
            stack.append(a + b)

        return stack[0]