#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
 
 
 
void solve(int arr[],int index,int size)// 1 2 2 1
{
 
 
if(index>=size)
{
 
cout<<"YES"<<endl;
 
return;
 
}
 
if(arr[index]!=arr[size])
{
 
cout<<"NO"<<endl;
 
return ;
}
 
else
{
 
 
solve(arr,index+1,size-1);
 
}
 
 
 
 
 
 
 
}
 
 
 
int main()
{
 
 
int n;
cin>>n;
 
 
int arr[n];
 
for (int i=0;i<n;i++)
{
 
 
cin>>arr[i];
 
}
 
solve(arr,0,sizeof(arr)/4-1);
 
 
}
