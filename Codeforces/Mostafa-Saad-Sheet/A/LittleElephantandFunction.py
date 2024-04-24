


def little_elephant_function(n, permutation):
    # Base case
    if n == 1:
        return permutation
    
    # Recursively call the function with n-1
    permutation = little_elephant_function(n - 1, permutation)
    
    # Perform the swap
    permutation[n - 1], permutation[n - 2] = permutation[n - 2], permutation[n - 1]
    
    return permutation




n=int(input())
descending_permutation = list(range(n, 0, -1))
print(descending_permutation)    
little_elephant_function(n,descending_permutation)




for i in descending_permutation:
    print(i,end=" ")