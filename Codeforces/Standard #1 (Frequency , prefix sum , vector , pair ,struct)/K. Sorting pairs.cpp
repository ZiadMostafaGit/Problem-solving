#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
typedef long long ll;

struct node
{

string s;
int salary;

};


    bool solve(node & a,node & b)
    {


    if(a.salary!=b.salary)
    {


    return a.salary>b.salary;

    }



    else
    {
        return a.s<b.s;

    }



    }
int main()
{


int n;cin>>n;

vector<node>arr(n);

for(int i=0;i<n;i++)
    {


    cin>>arr[i].s>>arr[i].salary;


    }

    sort(arr.begin(),arr.end(),solve);

    int size=arr.size();

for(int i=0;i<size;i++)
{


cout<<arr[i].s<<" "<<arr[i].salary<<endl;


}

}
