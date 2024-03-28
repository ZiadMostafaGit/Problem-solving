
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
 
ll input;
 
 
bool solve( ll num)
{
 
 
    if (input<num)
    {
        return false;
    }
 
 
 
    else if(input==num)
 
    {
 
        return 1;
    }
 
 
    else
    {
 
 
        return solve(num*10) || solve(num*20);
 
 
    }
 
 
 
 
 
 
}
 
int main()
{
ll t;
cin>>t;
 
 
 
    while(t--)
    {
 
        cin>>input;
 
          if(solve(1))
          {
 
            cout<<"YES"<<endl;
 
          }
 
 
       else
         {
 
            cout<<"NO"<<endl;
          }
 
 
 
 
}
 
}