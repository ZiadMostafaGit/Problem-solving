 
string = input()
 
mylist = list(string)
mylist.sort()
mydic = {}
 
for char in mylist:
    if char in mydic:
        mydic[char] += 1
    else:
        mydic[char] = 1
for char in mydic:
    print(char, end=" ")
    for char2 in char:
        print(mydic[char2])