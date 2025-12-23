#include<iostream>
using namespace std;
class point{
private:int x,y;
public:
point():x(0),y(0){};
point(int m,int n):x(m),y(n){};
void display(){
cout<<x<<y;  
}
void input(){
cout<<"enter x and y cordinate";
cin>>x>>y;
}
//point operator +(point m){
  //  point temp;
 //  temp.x=x+m.x;
  //  temp.y=y+m.y;
  //  return temp;
//}
point operator +(point m){
    return (point(x+m.x,y+m.y));
}

};
int main(){
point A,B,C;
A.input();
B.input();
C=A+B;
C.display();
}