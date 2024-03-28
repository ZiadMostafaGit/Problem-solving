
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
 
 
 
 
 
 
 
 
ll solve(ll n)
{
 
 
if(n<2)
{
 
 
return 0;
 
 
}
else
{
 
 
return 1+solve(n/2);
 
 
}
 
}
 
 
 
int main()
{
 
ll n;
cin>>n;
cout<<solve(n);
 
 
 
}