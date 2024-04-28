#include<iostream>
#include<vector>
using namespace std;




int main(){


int n,m;
cin>>n>>m;

vector<string>input(n);
vector<string>result(n);



int maxindex=0;
for (int i=0;i<n;i++){
cin>>input[i];

for(int j=0;j<m;j++){


if (input[i][j]=='*'){

    maxindex=max(maxindex,j);

}

}



}








int z=0;
for(int i=0;i<n;i++){

int index=0;
for(int j=0;j<m;j++){
    
    if(input[i][j]=='*'){

        result[z][index]='*';
        index++;


    }

}

for(int x=index;x<maxindex;x++){

result[z][x]='.';

}


z++;




}


cout<<"==============================================="<<endl;



for(int i=0;i<result.capacity();i++){



cout<<result[i]<<endl;



}







}