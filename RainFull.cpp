#include<iostream>
using namespace std;


class Weather{
private:
    int year;
    string station;
    int month;
    int rainfall;
    int stationindex;

public:
    Weather(int year,string station,int month,int rainfall,int stationindex){
        this->year=year;
        this->station=station;
        this->month=month;
        this->rainfall=rainfall;
        this->stationindex=stationindex;
    }
    Weather(){
        this->year=0;
        this->station="";
        this->month=0;
        this->rainfall=0;
        this->stationindex=0;
    }
    void setYear(int year){
        this->year=year;
    }

    int getYear(){
        return this->year;
    }

    void setStation(string station){
        this->station=station;
    }
    string getStation(){
        return this->station;
    }

    void setMonth(int month){
        this->month=month;
    }
    int getMonth(){
        return this->month;
    }

    void setRainfall(int rainfall){
        this->rainfall=rainfall;
    }

    int getRainfall(){
        return this->rainfall;
    }

    void setStationindex(int stationindex){
        this->stationindex=stationindex;
    }

    int getStationindex(){
        return this->stationindex;
    }



};
int main(){

Weather w[246];

    int y;
    string s;
    int m;
    int r;
    int si;

freopen("customized_daily_rainfall_data.txt","r",stdin);

for(int i=0;i<246;i++){
    cin>>y>>s>>m>>r>>si;
    w[i].setYear(y);
    w[i].setStation(s);
    w[i].setMonth(m);
    w[i].setRainfall(r);
    w[i].setStationindex(si);
}

for(int i=0;i<246;i++){
    cout<<w[i].getYear()<<" "<<w[i].getStation()<<" "<<
    w[i].getMonth()<<" "<<w[i].getRainfall()<<" "<<w[i].getStationindex()<<endl;
}



return 0;
}
