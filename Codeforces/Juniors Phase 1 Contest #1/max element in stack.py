class Stack:
    def __init__(self):
        self.arr = []
        self.max_list = []

    def push(self, num):
        self.arr.append(num)
        if not self.max_list or num >= self.max_list[-1]:
            self.max_list.append(num)
        print(self.max_list[-1])

    def pop(self):
        if self.arr and self.arr[-1] == self.max_list[-1]:
            self.arr.pop()
            self.max_list.pop()

        if self.max_list:
            print(self.max_list[-1])
        else:
            print("No elements in the stack")


n = int(input())
s1 = Stack()
for i in range(n):
    th = input()
    if len(th) > 1:
        val = int(th[1:])
        s1.push(val)
    else:
        s1.pop()
