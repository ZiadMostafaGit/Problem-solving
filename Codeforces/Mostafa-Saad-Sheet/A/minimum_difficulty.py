n=int(input())

input_str=input()

nums=input_str.split()

arr=[int(num) for num in nums]


maxval=0
res=100000000
for i in range(1,n-1):
    for j in range(n-1):
        if j==i:
            maxval=max(maxval,arr[j+1]-arr[i-1])
            
        else:

            maxval=max(maxval,arr[j+1]-arr[j])

    res=min(res,maxval)
    maxval=0



print(res)