#include<bits/stdc++.h>
        using namespace std;
        typedef long long ll;
         int si;
         int m;
         int counter=0;
 
 
        ll solve(ll arr[])
        {
 
        if(counter==m)
        {
 
        return 0;
        }
        counter++;
        return arr[--si]+solve(arr);
 
 
        }
 
 
 
        int main()
        {
 
        cin>>si>>m;
 
 
        ll arr[si];
 
        for(int i=0;i<si;i++)
        {
 
 
        cin>>arr[i];
        }
 
        cout<<solve(arr)<<endl;
 
 
        }