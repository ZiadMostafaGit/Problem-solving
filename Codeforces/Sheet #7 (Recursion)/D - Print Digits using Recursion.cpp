        #include<bits/stdc++.h>
        #include<string>
        using namespace std;
        typedef long long ll;
 
 
 
        void solve(string s,int counter)
        {
 
 
if(counter==s.length()-1)
 
{
cout<<s[counter];
return ;
 
}
 
 
        cout<<s[counter]<<" ";
        solve(s,counter+1);
 
 
 
 
 
        }
 
 
 
 
        int main()
        {
 
 
        int t;
        cin>>t;
        while(t--)
            {
 
 
             string s;
 
 
             cin>>s;
 
 
             solve(s,0);
 
cout<<endl;
 
           }
 
 
 
        }
