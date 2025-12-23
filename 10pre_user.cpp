#include<iostream>
using namespace std;
class Distance{
private:int feet,inch;
public:Distance():feet(0),inch(0){};
Distance(int m){
float ft =3.28*m;
feet=(int)ft;
inch=(ft-feet)*12;
}
void getdistance(){
    cin>>feet>>inch;
}
void show(){
    cout<<feet<<','<<inch;
}
};
int main(){
Distance d;
d=5;
d.show();
}