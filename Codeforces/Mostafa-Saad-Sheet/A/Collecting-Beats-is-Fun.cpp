#include<iostream>
#include<vector>
using namespace std;







int main(){



int k;
cin>>k;
vector<string>panals(4);

vector<int>count(10);
for (int i=0;i<4;i++){

cin>>panals[i];

}


for(int i=0;i<4;i++){



for(int j=0;j<4;j++){

if(panals[i][j]!='.')
    {

        int time=panals[i][j]-'0';
        count[time]++;




    }

}



}


for(int i=0;i<10;i++){

if(count[i]>k*2){
    cout<<"NO"<<endl;
    return 0;
}




}


cout<<"YES"<<endl;



}

