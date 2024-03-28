# read input
n, q = map(int, input().split())
friends = {}
for i in range(n):
    name, money = input().split()
    friends[name] = int(money)

# handle queries
for i in range(q):
    query = input().split()
    if query[0] == '1':
        name, money = query[1], int(query[2])
        friends[name] += money
    elif query[0] == '2':
        name = query[1]
        print(friends[name])