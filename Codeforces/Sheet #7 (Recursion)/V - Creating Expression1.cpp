#include <iostream>
#include<vector>
#include <utility>
#include<algorithm>
typedef long long ll;
using namespace std;
vector<int>arr(100);
int n,x;
 
 
 
 
bool  solve(ll sum,int index)
{
 
if(index==n)
{
    return sum==x;
 
}
int sum1=solve(sum+arr[index],index+1);
int sum2=solve(sum-arr[index],index+1);
 
return sum1||sum2;
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main()
{
 
 
    cin>>n>>x;
 
    arr.resize(n);
 
for(int i=0;i<n;i++)
{
 
 
 
    cin>>arr[i];
 
}
 
 
 
 
bool resulte=solve(arr[0],1);
 
if(resulte==true)
 
    cout<<"YES";
else
 
 
    cout<<"NO";
 
 
}
