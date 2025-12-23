#include<iostream>
using namespace std;
class Time{
private:int hrs,min;
public:
Time():hrs(0),min(0){};
Time(int m){
float h=m/60.0;
hrs=(int)h;
min=(h-hrs)*60;
}
void show(){
cout<<hrs<<':'<<min;
}
int input(){    
}
};
int main(){
Time t;
t=270;
t.show();

}