#include <iostream>
#include<vector>
#include <string>
using namespace std;
typedef long long ll;
int main()
{


    string s;
    cin>>s;

    int size=s.size();

    vector<int>arr(size+1,0);

    for(int i=1;i<=size;i++)
    {


        if(s[i-1]=='a')
        {

            arr[i]=arr[i-1]+1;


        }
        else
        {
            arr[i]=arr[i-1];



        }


    }

/*
 * arr=[0 1 1 1 2 3 3 3]
 *
abcaabc
6
1 3
2 4
1 6
3 5
4 7
1 7

*/


int q;cin>>q;
while(q--)
{

    int l,r;cin>>l>>r;
    cout<<arr[r]-arr[l-1]<<endl;



}








}





























//ll n,m,q;cin>>n>>m>>q;
//
//
//vector<vector<ll>>matrix(n+1,vector<ll>(m+1));
//
//for(int i=1;i<=n;i++)
//{
//
//    for(int j=1;j<=m;j++)
//     {
//
//        cin>>matrix[i][j];
//
//
//     }
//
//}
//
//
//
//
//    vector<vector<ll>>prefix(n+1,vector<ll>(m+1));
//
//
//    for(int i=1;i<=n;i++)
//    {
//
//        for(int j=1;j<=m;j++)
//        {
//
//            prefix[i][j]=prefix[i][j-1]+matrix[i][j];
//
//
//        }
//
//    }
//
//    for(int j=1;j<=m;j++)
//    {
//
//        for(int i=1;i<=n;i++)
//        {
//
//            prefix[i][j]+=prefix[i-1][j];
//
//
//        }
//
//    }
//
//
//
//    while(q--)
//    {
//
//        ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
//
//
//        ll sum=prefix[x2][y2]-prefix[x2][y1-1]-prefix[x1-1][y2]+prefix[x1-1][y1-1];
//
//        cout<<sum<<endl;
//
//
//
//    }
