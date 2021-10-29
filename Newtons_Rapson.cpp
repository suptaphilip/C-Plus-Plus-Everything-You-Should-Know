#include<iostream>
#include<math.h>
using namespace std;


double f(double x){
    return x*x-5;
}

double df(double x){
    return 2*x;
}

double newtonRapson(double x0, int iteration){
cout.precision(10);
double x_new;
for(int i=1;i<=iteration;i++){
        x_new = x0-(f(x0)/df(x0));
        cout<<"Iteration:"<<i<<" "<<x_new<<endl;
        x0=x_new;
}

return x_new;
}

int main(){
cout<<newtonRapson(1,10)<<endl;


return 0;
}
