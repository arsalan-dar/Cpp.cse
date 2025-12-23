#include<iostream>
using namespace std;
class Distance{
private:int feet,inch;
public:
Distance():feet(0),inch(0){};
operator float(){
float ft=inch/12.0;
ft+=feet;
return (ft/3.28);
}
void get(){
cout<<"enter feet and inches";
cin>>feet>>inch;
}
};
int main(){
Distance d;
d.get();
float meters=d;
cout<<meters;
}
