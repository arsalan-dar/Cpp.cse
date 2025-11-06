#include<iostream>
using namespace std;
void swapvalue (int a,int b){
int temp=a;
a=b;
b=temp;
cout<<"value swap insidee function "<<a<<"  "<<b<<endl;
}
void swaprefrence(int &a,int &b){
int temp = a;
a=b;
b=temp;
cout<<"refrence swap inside function"<<a<<"  "<<b<<endl;
}
void pointerswap(int *a,int *b){
    int temp=*a;
    *a= *b;
    *b=temp;
cout<<"pointer swap inside function"<<*a<<"  "<<*b<<endl;


}

int main(){
int x,y;    
cout<<"enter two numbers "<<endl;

cin>>x>>y;
cout<<"bedore any swap "<<x<<"\t"<<y<<endl;
swapvalue(x,y);
cout<<"after value swap "<<x<<"\t"<<y<<endl;
//swap by refrence
swaprefrence(x,y);
cout<<"after refrence swap "<<x<<"\t"<<y<<endl;
//swap by pointer
cout<<"current value of  "<<x<<"  "<<y<<endl;
int *n=&x;
int *m=&y;
pointerswap(n,m);
cout<<"after pointer swap"<<x<<"  "<<y<<endl;

}