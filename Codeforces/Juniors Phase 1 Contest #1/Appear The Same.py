

s = input()
sl = []
for i in s:
    sl.append(i)


sl.sort()


char = sl[0]
num = 0
res = []
for i in sl:
    if i == char:
        num += 1
    else:
        res.append(num)
        num = 1
        char = i

res.append(num)
res.sort(reverse=True)
result = all(x == res[0] for x in res)
if result:
    print("YES")


else:
    res[0] -= 1
    result = all(x == res[0] for x in res)
    if result:
        print("YES")
    else:

        print("NO")


# from collections import Counter


# def is_valid(s: str) -> str:
#     freq = Counter(s)
#     values = list(freq.values())
#     values.sort()
#     if values.count(values[0]) == len(values):
#         return "YES"
#     elif values.count(values[0]) == len(values) - 1 and values[-1] - values[-2] == 1:
#         return "YES"
#     elif values.count(values[-1]) == len(values) - 1 and values[0] == 1:
#         return "YES"
#     else:
#         return "NO"


# s = input()
# # Test the function with the provided examples
# print(is_valid(s))  # YES


s = input()
sl = []
for i in s:
    sl.append(i)

sl.sort()

char = sl[0]
num = 0
res = []
for i in sl:
    if i == char:
        num += 1
    else:
        res.append(num)
        num = 1
        char = i

res.append(num)
res.sort(reverse=True)
result = all(x == res[0] for x in res)
if result:
    print("YES")
else:
    res[0] -= 1
    result = all(x == res[0] for x in res)
    if result:
        print("YES")
    else:
        res[0] += 1
        res[-1] -= 1
        result = all(x == res[-1] for x in res)
        if result:
            print("YES")
        else:
            print("NO")
#hi            
