
#include<iostream>
#include<algorithm>
using namespace std;
 
 
 
void solve(int arr[] ,int index,int size)//40 26 48 11 492 264
{
 
 
 
if(index>=size-1)
{
 
 cout<<arr[index]<<endl;
return ;
 
}
 
if(arr[index]>arr[index+1])
{
 
swap(arr[index],arr[index+1]);
 
 
 
}
 
solve(arr,index+1,size);
 
}
 
 
 
 
 
 
 
 
 
int main ()
{
 
 
int n;
cin>>n;
 
 
 
int arr[n];
 
 
for(int i=0;i<n;i++)
{
 
 
cin>>arr[i];
 
 
 
}
 
//
//int size=sizeof(arr)/4;
//int resulte=solve(arr,0,size);
//
//cout<<resulte<<endl;
//
 
 
 solve(arr,0,sizeof(arr)/4);
 
}