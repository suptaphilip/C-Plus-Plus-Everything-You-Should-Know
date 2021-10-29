#include<iostream>
#include<math.h>
using namespace std;

double * linspace(double l, double u, int s){

    double del_h = (u-l)/s;

    double *v= new double[s+1];

    for(int i=0;i<=s;i++){
        v[i]=l+(i*del_h);
    }

    return v;


}

double sigmoid(double x){
    return 1/(1+exp(-x));
}

double tan_h(double x){
    return tanh(x);
}


int main(){
    int s=500;
    double *v = linspace(-6,6,s);

    freopen("data.txt","w",stdout);

    for(int i=0;i<=s;i++){
        cout<<v[i]<<" "<<tan_h(v[i])<<endl;
    }


return 0;
}
