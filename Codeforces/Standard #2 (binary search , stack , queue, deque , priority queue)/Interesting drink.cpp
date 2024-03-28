#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

int n;
cin>>n;
vector<int>arr(n);

for(int i=0;i<n;i++)
{
    cin>>arr[i];

}

sort(arr.begin(),arr.end());
int q;cin>>q;

int test;
int counter;
while(q--)
{


counter=0;
  cin>>test;


  counter=upper_bound(arr.begin(),arr.end(),test)-arr.begin();



  cout<<counter<<endl;

}

}

