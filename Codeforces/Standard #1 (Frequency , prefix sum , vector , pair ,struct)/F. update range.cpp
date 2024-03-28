#include <iostream>
#include <vector>
//#include "test.cpp"
using namespace std;
typedef long long ll;








    int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,q;cin>>n>>q;

    vector<ll>arr(n);


    for (int i=0;i<n;i++)
    {

        cin>>arr[i];


    }

vector<ll>lazy_array(n+1,0);

    for(ll i=0;i<q;i++)
    {

        int l,r,val;
        cin>>l>>r>>val;
        lazy_array[l-1]+=val;
        lazy_array[r]-=val;


    }


    for(int i=1;i<n;i++)
    {

        lazy_array[i]+=lazy_array[i-1];


    }


    for(int i=0;i<n;i++)
    {

        arr[i]+=lazy_array[i];
        cout<<arr[i]<<" ";

    }



}
