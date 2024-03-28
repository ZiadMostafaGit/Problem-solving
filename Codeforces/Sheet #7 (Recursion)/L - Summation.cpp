#include<iostream>
#include<algorithm>
using namespace std;
long long  resulte=0;
 
 
 
 
long long solve(int arr[],int size)
{
 
if(size<0)
{
 
 
return resulte;
 
 
}
 
resulte+=arr[size];
return solve(arr,size-1);
 
 
 
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
int main()
 
 
 
 
{
 
 
int n;
cin>>n;
 
int arr[n];
 
 
for(int i=0;i<n;i++)
{
 
 
cin>>arr[i];
 
 
}
 
 
cout<<solve(arr,n-1);
 
 
 
 
 
 
 
 
 
}