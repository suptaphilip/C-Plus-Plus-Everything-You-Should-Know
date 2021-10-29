#include<iostream>
using namespace std;

double * linspace(double l, double u, int s){

    double del_h = (u-l)/s;

    double *v= new double[s+1];

    for(int i=0;i<=5;i++){
        v[i]=l+(i*del_h);
    }

    return v;


}


int main(){

    double *v = linspace(0,1,5);

    for(int i=0;i<=5;i++){
        cout<<v[i]<<" ";
    }


return 0;
}
