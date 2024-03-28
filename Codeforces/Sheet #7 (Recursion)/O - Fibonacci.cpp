
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
 
 
 
 
ll solve(int n)
{
 
 
if(n==0)
{
 
return 0;
 
 
}
if(n==1)
{
 
 
return 1;
 
 
}
 
return solve(n-1)+solve(n-2);
 
 
 
 
 
 
}
 
 
 
int main()
 
{
 
 
int n;cin>>n;
cout<<solve(n-1);
 
}