#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;


struct node{

string s;
int arabic;
int math;
int scince;
int english;
ll sums;


};
bool compareNodes(const node& a, const node& b) {
    if (a.sums != b.sums)
        return a.sums > b.sums;
    else
        return a.s < b.s;
    return false; // add this line
}

int main() {

    int n;cin>>n;

vector<node>arr(n);


for(int i=0;i<n;i++)
{

    cin>>arr[i].s>>arr[i].arabic>>arr[i].math>>arr[i].scince>>arr[i].english;

arr[i].sums=arr[i].arabic+arr[i].math+arr[i].scince+arr[i].english;





}


sort(arr.begin(),arr.end(), compareNodes);







for(int i=0;i<arr.size();i++)
{


    cout<<arr[i].s<<" "<<arr[i].sums<<" "<< " "<<arr[i].arabic<<" "<<arr[i].math<<" "<<arr[i].scince<<" "<<arr[i].english<<endl;



}

}
