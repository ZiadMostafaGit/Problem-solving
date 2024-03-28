#include <iostream>
#include<iomanip>
#include <vector>
using namespace std;
typedef long long ll;
 
 ll solve(ll num1,ll num2)
 {
 
 ll resulte=1;
 ll temp=2;
 
 
 
 
 for(ll i=num1+1;i<=num2;i++)
 {
 
 
 resulte*=i;
 if(temp<=num2-num1&&resulte%temp==0)
 {
 
 resulte/=temp;
 temp++;
 
 
 }
 
 
 }
 
 return resulte;
 
 
 
 
 
 }
 
 
 
 int main()
 {
 
 ll n,r;
 cin>>n>>r;
 
 if(r>n)
 {
 
 cout<<0<<endl;
 
 }
 
 else
 {
 
 
 cout<<solve(r,n);
 
 
 
 }
 
 }
