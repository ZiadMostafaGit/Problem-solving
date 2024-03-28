from collections import defaultdict
 
arr = defaultdict(int)
n, q = map(int, input().split())
 
for i in range(q):
    choice, num = map(int, input().split())
    if choice == 1:
        arr[num] += 1
    elif choice == 2:
        print(arr[num])
