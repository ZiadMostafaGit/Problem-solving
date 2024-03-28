

a, b, t = map(int, input().split())

mod = t % a
if mod == t:
    print(0)


elif mod > 0 and mod < t:
    a -= mod
    res = a*b
    print(res)
else:
    res = a*b
    print(res)
