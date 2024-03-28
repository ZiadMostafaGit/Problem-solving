#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int lenghe=0;
 
void  solve(int n)
{
 
 
 
lenghe++;
if(n==1)
{
 
return ;
 
 
 
 
}
 
 
 
if(n%2==0)
{
 
 
return solve(n/2);
 
 
}
 
 
 
else
{
 
return solve(n * 3 + 1);
 
}
 
}
 
 
 
int main()
{
int  n;
cin>>n;
solve(n);
cout<<lenghe;
 
 
 
}
