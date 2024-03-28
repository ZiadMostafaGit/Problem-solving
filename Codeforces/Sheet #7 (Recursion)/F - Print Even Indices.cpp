
#include <iostream>
#include<algorithm>
using namespace std;
void solve(int arr[], int arr_size,int index)
{
 
  if(index>arr_size-1)
  {
 
  return ;
 
}
 
   solve(arr,arr_size,index+2);
 
  cout<<arr[index]<<" ";
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main()
{
    int n;
    cin >> n;
 
 
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solve(arr,n,0);
 
 
    return 0;
}