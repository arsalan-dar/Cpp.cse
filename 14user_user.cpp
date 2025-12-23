//m to km writing code in destination
#include <iostream>
using namespace std;
class meter{
private:  int m;
public:
  meter():m(0){};
  int getm(){
   return m;
   }
   void input(){
    cout<<"enter distance in m";
    cin>>m;
   }
};
class kilometer{
private:int k;
public:
  kilometer():k(0){};
kilometer(meter m){
  k=m.getm()/1000;
}
int show(){
 return k;
}

};
int main(){
kilometer k;
meter m;
m.input();
k=m;
cout<<k.show();
}
