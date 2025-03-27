class Solution(object):
    
    def reverse(self, x):
        string=str(x)
        j=1

        if x<0:
          
         string=string[1:]
         j=-1

        newstr=""
        for i in range(len(string)-1,-1,-1):
         newstr+=string[i]
         
        if int(newstr)>(2**31)-1:
           return 0
        return int(newstr)*j  

