n, k, a = map(int, input().split())


time = 0
answer = 100000000000000
for i in range(n):
    t, s = map(int, input().split())
    t *= a
    opr = k/t
    time += t*opr
    time += s*opr
    time -= s

    answer = min(answer, time)

print(answer)
