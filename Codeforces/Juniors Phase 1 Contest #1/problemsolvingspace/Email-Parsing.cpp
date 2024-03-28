//
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse2")
//#include <bits/stdc++.h>
//#define ll long long
//#define all(v) (v).begin(), (v).end()
//#define NO cout << "NO\n"
//#define YES cout << "YES\n"
//
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
//
//    string s; cin >> s;
//    int at=0,dot=0,x=0,y=0;
//
//    for(int i=0 ; i<s.size(); i++)
//    {
//        if(s[i]=='@'){at++;x=i;}
//        else if(s[i]=='.'){dot++;y=i;}
//    }
//    if(x==0 || y==0 || at!=1 || dot!=1 || x==s.size()-1 || y==s.size()-1 || x-y==-1 || x>y) NO; else YES;
//}
