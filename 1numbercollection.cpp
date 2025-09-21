#include<iostream>
using namespace std;
int main(){
int n,i,arr[50];    
float avg=0;
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
    avg+=arr[i];
}
avg=avg/n;
cout<<"largest number is "<<max<<"\n"<<"smallest number is  "<<min<<"\n"<<"average is "<<avg;



}
