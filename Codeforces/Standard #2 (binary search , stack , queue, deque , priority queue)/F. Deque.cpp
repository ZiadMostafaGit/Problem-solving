#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<deque>
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


    deque<int>my_queue;

    while(q--)
    {
        string quiry;cin>>quiry;


        if(quiry=="push_back")

        {


            int num;cin>>num;
            my_queue.push_back(num);


        }






        else if(quiry=="pop_back")
        {

            my_queue.pop_back();

        }



        else if(quiry=="push_front")
        {
            int num;cin>>num;



            my_queue.push_front(num);


        }



        else if(quiry=="pop_front")
        {



            my_queue.pop_front();


        }




        else if(quiry=="front")
        {


            cout<<my_queue.front()<<endl;

        }


        else if(quiry=="back")
        {


            cout<<my_queue.back()<<endl;

        }



        else if(quiry=="print")
        {
            int index;cin>>index;
            index--;



            cout<<my_queue[index]<<endl;

        }















    }



/*5
5
5
6
3
6
5
3
5
5
5
*/







    return 0;
}


