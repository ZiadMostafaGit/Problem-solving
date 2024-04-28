n, m = map(int, input().split())

input_data = []
result = []

max_col = 0
min_col = m
max_row=0
min_row=n


for i in range(n):
    row = input()
    input_data.append(row)

    for j in range(m):  
        if row[j] == '*':
            max_row=max(max_row,i)
            max_col = max(max_col, j)
            min_col = min(min_col, j)
            min_row=min(min_row,i)








for i in range(min_row,max_row+1):
    
    print(input_data[i][min_col:max_col+1])    
   


