#include<bits/stdc++.h>
        using namespace std;
        typedef long long ll;
 
 
 
        void solve(int n)
        {
 
        if(n<=1)
        {
 
        cout<<n;
        return ;
 
        }
 
         cout<<n<<" ";
 
         solve(n-1);
 
 
        }
 
 
 
 
        int main()
        {
 
 
        int n;
        cin>>n;
        solve(n);
 
 
 
 
 
 
        }