#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x,y,a,b;
cout<<"Enter the real part and coefficient of imaginary part of first number respectively";
cin>>x>>a;
cout<<"Enter the real part and coefficient of imaginary part of second number respectively";
cin>>y>>b;
if(sqrt((a*a)+(x*x)==(b*b)+(y*y)))
cout<<"both numbers have same magnitude";
else
cout<<"they have different magnitude";


}
