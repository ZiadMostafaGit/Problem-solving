 
#include<iostream>
#include<string>
using namespace std;
 
 
 
 
 
int solve(string s,int counter,int index)
 
{
if(index>s.length())
{
 
 
return counter;
 
 
}
 
if(s[index]=='a'||s[index]=='A'||s[index]=='e'||s[index]=='E'||s[index]=='i'||s[index]=='I'||s[index]=='o'||s[index]=='O'||s[index]=='u'||s[index]=='U')
 
 
counter++;
 
 
return solve(s,counter,index+1);
 
 
 
}
 
 
int main()
{
 
 
 
string s;
getline(cin,s);
 
 
 
int result=solve(s,0,0);
 
cout<<result<<endl;
 
 
 
 
 
 
 
 
 
}