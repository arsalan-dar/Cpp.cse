#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int temp,hcount=0,ccount=0,pcount=0,n=1;
    float avg=0,avr=0;
    for( ; ; ){
        
    cout<<"enter temperature";
    cin>>temp;   
    if(temp>=85){
    
    avg+=temp;
    hcount+=1;
    avr+=avg/n;
    n+=1;
    }
    else if(temp<85&&temp>=60){
    pcount+=1;
    avg+=temp;
    avr+=avg/n;
    n++;}
    else if (temp<60){
    ccount+=1;
    avg+=temp;
    avr+=avg/n;
    n++;
    }
    cout<<"hot days = "<< hcount<<endl<<"pleasent days = "<<pcount <<endl<<"cold days = "<<ccount<<endl<<"average tempersture="<<avr<<endl;
    }






}