#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


int main(){

srand(time(0));

freopen("random_int.txt","w",stdout);
for(int i=0;i<5;i++){
    cout<<(rand()%100+1)<<endl;
}

freopen("random_float.txt","w",stdout);
for(int i=0;i<5;i++){
    cout<<(float)(rand()%100+1)/100<<endl;
}

return 0;
}

