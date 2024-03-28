#include <iostream>
#include <vector>
#include <climits>
 
using namespace std;
int n;
 
 
void solve(int arr[],int index,int counter)
{
 
/*
5
4 3 5 7 3
 
*/
if(index==n)
{
 
return ;
 
}
 
if(index==1)
{
    cout<<counter<<" ";
}
 
 
if(counter>arr[index])
{
 
cout<<counter<<" ";
 
 
 
}
else
{
counter=arr[index];
cout<<counter<<" ";
 
}
 
solve(arr,index+1,counter);
 
 
}
 
 
 
 
 
 
 
 
 
int main()
{
 
cin>>n;
 
int arr[n];
 
 
for(int i=0;i<n;i++)
{
 
 
cin>>arr[i];
 
 
}
 
 
solve(arr,1,arr[0]);
 
 
 
 
 
 
 
 
}