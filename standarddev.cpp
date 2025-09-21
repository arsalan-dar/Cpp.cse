#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,i,arr[50];    
float sumsq=0,avg=0,avgsq,sd,range;
cout<<"enter the total no of numbers you want to enter";
cin>>n;
for(i=0;i<n;i++){
cin>>arr[i];

}
int min=arr[0],max=arr[0];
for(i=1;i<n;i++){
if(max<arr[i])
max=arr[i];
}
for (i=1;i<n;i++){
    if(min>arr[i])
    min=arr[i];
}
for(i=0;i<n;i++){
    sumsq+=(arr[i]*arr[i]);
    avg+=arr[i];
}
avg=avg/n;
avgsq=avg*avg;
sd=sqrt((sumsq/n)-avgsq);
range=max-min;
cout<<"range = "<<range<<endl<<"standard deviation = "<<sd;



}
