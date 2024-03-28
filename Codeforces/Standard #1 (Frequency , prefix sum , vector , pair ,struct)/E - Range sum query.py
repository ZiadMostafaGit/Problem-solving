n, q = map(int, input().split())
a = list(map(int, input().split()))

# Calculate prefix sum
prefix_sum = [0] * (n+1)
for i in range(1, n+1):
    prefix_sum[i] = prefix_sum[i-1] + a[i-1]

# Process queries
for i in range(q):
    l, r = map(int, input().split())
    print(prefix_sum[r] - prefix_sum[l-1])