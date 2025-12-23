#include<iostream>
using namespace std;
class Point{
private:
int x,y;
public:
Point():x(0),y(0){};
Point(int m,int n):x(m),y(n){};
 void input(){
 cout<<"enter x and y coordinte";
 cin>>x>>y;
 }
 void display(){
    cout<<x<<','<<y<<endl;
 }

Point add(Point A,Point B){
int p= x+B.x;
int q= y+B.y;
return Point(p,q);
}
};
int main(){
Point A,B,C,D(20,30);
A.input();
B.input();
C=B.add(A,B);
C.display();
D.display();

}