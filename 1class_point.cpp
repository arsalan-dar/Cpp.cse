#include<iostream>
using namespace std;

class Point{
private:
 int x,y;
public:
 Point():x(0),y(0){} ;
void input(){
cout<<"enter x and y coordinate of point";
cin>>x>>y;
} 
void show(){

    cout<<x<<','<<y;
}
};
int main(){
Point p,q;
p.show();
q.input();
q.show();
}
