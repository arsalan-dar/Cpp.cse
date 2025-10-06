#include<iostream>
using namespace std;
int main(){
int n;    
cout<<"enter a number";
cin>>n;
if(n>0 && n%2==0)
cout<<"posintve Even";
else if (n>0 && n%2!=0)
cout<<"positive odd";
else if (n<0 && n%2==0)
cout<<"negative even";
else if (n<0 && n%2!=0)
cout<<"negative odd";
else if (n==0)
cout<<"zero";

}