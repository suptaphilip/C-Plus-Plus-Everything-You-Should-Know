#include<iostream>
#include<vector>
using namespace std;

class point{
private:
    int x;
    int y;
public:
    point(){
    }
    point(int x, int y){
        this->x=x;
        this->y=y;
    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
    void display(){
    cout<<x<<" "<<y<<endl;
    }
};

void printVector(vector<point> vec){
    cout<<"Size of vector: "<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i].getx()<<" "<<vec[i].gety()<<endl;
    }
}
int main(){
    vector<point> v;
    point p1(10,20);
    point p2(100,200);
    v.push_back(p1);
    v.push_back(p2);
    printVector(v);


return 0;
}
