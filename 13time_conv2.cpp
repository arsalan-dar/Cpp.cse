#include<iostream>
using namespace std;
class Time{
private:int hrs,min;
public:
Time():hrs(0),min(0){};
operator int(){
   float mint=hrs*60;
   mint+=min;
return(mint);
}
void input(){
cout<<"enter hrs and mins";
cin>>hrs>>min;
}
};
int main(){
Time t;
t.input();
int mint=t;
cout<<mint;
}