#include<bits/stdc++.h>
        using namespace std;
        typedef long long ll;
 
 
 
        void solve(int n)
        {
 
        if(n<=0)
        {
 
        return ;
 
        }
                cout<<"I love Recursion\n";
 
 
        solve(n-1);
 
 
        }
 
 
 
 
        int main()
        {
 
 
        int n;
        cin>>n;
        solve(n);
 
 
 
 
 
 
        }