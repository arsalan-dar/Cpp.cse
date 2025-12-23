#include<iostream>
using namespace std;

class Point{
private:
 int x,y;
public:
Point(int m,int n):x(m),y(n){};
void input(){
cout<<"enter x and y coordinate of point";
cin>>x>>y;
} 
void show(){

    cout<<x<<','<<y<<endl;
}
};
int main(){
Point p(10,20),q(1,2);
p.show();
q.show();
q.input();
q.show();
}
