#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;
typedef long long ll;


void ziad()
{


    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

}









int main()
{
    ziad();





    int  q;

    cin>> q;


queue<int>my_queue;

while(q--)
{
    string quiry;cin>>quiry;


    if(quiry=="push")

    {


int num;cin>>num;
      my_queue.push(num);


    }






        else if(quiry=="pop")
        {

my_queue.pop();

        }



else if(quiry=="front")
{



    cout<<my_queue.front()<<endl;


}



else if(quiry=="back")
{



    cout<<my_queue.back()<<endl;


}



}














    return 0;
}


