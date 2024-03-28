#include <iostream>
#include <vector>
#include <climits>
 
using namespace std;
 
int s,e;
 
 
int solve(int s,int e)
{
 
 
if(s==e)
{
 
    return 1;
}
else if(s>e)
{
    return 0;
}
 
 
return solve(s+1,e)+solve(s+2,e)+solve(s+3,e);
 
 
 
}
 
 
 
int main()
{
 
cin>>s>>e;
 
int resulte=solve(s,e);
 
cout<<resulte<<endl;
 
 
 
 
 
}