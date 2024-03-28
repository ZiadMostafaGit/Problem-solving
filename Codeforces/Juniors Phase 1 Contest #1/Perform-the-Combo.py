
#  def char_frequency(string, num, res):
#     for i in range(num):
#         index = ord(string[i]) - ord('a')
#         res[index] += 1
#     return res


# t = int(input())

# for i in range(t):
#     n, m = map(int, input().split())
#     string = input()
#     res = [0]*26
#     thelist = list(input().split())
#     for j in thelist:
#         num = int(j)
#         res = char_frequency(string, num, res)
#     res = char_frequency(string, len(string), res)
#     for i in res:
#         print(i, end=" ")
# # def char_frequency(string, num, res):
# #     for i in range(num):
# #         index = ord(string[i]) - ord('a')
# #         res[index] += 1
# #     return res


# # t = int(input())

# # for i in range(t):
# #     n, m = map(int, input().split())
# #     string = input()
# #     res = [0]*26
# #     max_num = max(map(int, input().split()))
# #     res = char_frequency(string, max_num, res)
# #     res = char_frequency(string, len(string), res)
# #     for i in res:
# #         print(i, end=" ")


##################################################
# THE CORRECT SELOTION
#################################################
t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    s = input()
    p = list(map(int, input().split()))
    res = [0] * 26
    cnt = [0] * n
    for i in p:
        cnt[i - 1] += 1
    for i in range(n - 2, -1, -1):
        cnt[i] += cnt[i + 1]
    for i in range(n):
        res[ord(s[i]) - ord('a')] += cnt[i] + 1
    print(*res)
