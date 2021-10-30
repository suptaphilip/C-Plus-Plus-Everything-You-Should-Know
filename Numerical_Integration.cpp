#include<iostream>
#include<math.h>
using namespace std;


double f(double x){
    return pow(2,x);
}

double Trapezoidal_Integral(double a, double b, int n){

double delta_x= (b-a)/n;

double sum=f(a);

for(int i=1;i<n;i++){
        sum=sum+2*f(a+i*delta_x);
}
sum=sum+f(b);

return (delta_x/2)*(sum);
}

int main(){
cout<<Trapezoidal_Integral(-1,3,20)<<endl;


return 0;
}
