#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


int main(){

    char DNA[4]={'A','G','C','T'};

srand(time(0));

for(int k=0;k<10;k++){
      for(int i=0;i<50;i++){
        cout<<DNA[rand()%4];
    }
    cout<<endl;
}




return 0;
}

