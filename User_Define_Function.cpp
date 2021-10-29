#include<iostream>
using namespace std;

double f(double x){
    return x*x+2*x+5;
}


double df(double x){
    return 2*x+2;
}


int main(){

cout<<f(2.0)<<" "<<df(2.0)<<endl;

double x[5] ={-2,-1,0,1,2};

for(int i=0;i<5;i++){
    cout<<x[i]<<" "<<f(x[i])<<" "<<df(x[i])<<endl;
}

return 0;
}
