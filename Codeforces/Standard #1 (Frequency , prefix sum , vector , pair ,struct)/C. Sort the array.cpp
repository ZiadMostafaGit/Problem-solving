#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main()
 
{
 
 
 
 
 
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n;cin>>n;
 
 
vector<int>arr(n);
 
 
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    
 
}
 
sort(arr.begin(),arr.end());
 
for(auto num :arr)
{
 
    cout<<num<<" ";
}
 
 
 
 
 
 
 
 
 
}