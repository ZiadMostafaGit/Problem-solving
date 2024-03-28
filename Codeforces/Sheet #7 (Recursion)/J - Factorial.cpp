
#include<iostream>
#include<string>
using namespace std;
 
 
long long  solve(unsigned int n)
 
{
 
if(n<1)
{
 
return 1;
 
 
}
 
 
 
return n*solve(n-1);
 
 
 
}
 
 
 
 
int main ()
 
 
{
 
 
 
 
int n;
cin>>n;
 
 
long long  resulte=solve(n);
 
 
cout<<resulte<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}