#include<iostream>
using namespace std;
class Point{
private:
 int x,y;
public:
Point():x(0),y(0){};
Point(int m,int n):x(m),y(n){};
void input(){
cout<<"enter value of x and y coordinate";
cin>>x>>y;
}
void show(){
cout<<x<<','<<y<<endl;
}
~Point(){
    cout<<"object destroyed";
}
};

int main(){
Point p(10,20),q;
p.show();
q.show();
q.input();
q.show();
}