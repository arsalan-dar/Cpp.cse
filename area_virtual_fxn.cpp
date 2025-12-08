#include<iostream>
using namespace std;

class shape{
    public:
       virtual float area()=0;
};

class circle:public shape{
float radius;
public:
circle(float r)
 {
    radius=r;
    }
float area(){
    return 3.14*radius*radius;
}
};
class rectangle:public shape{
   float length,bredth;
   public:
     rectangle(float l,float b)
     {
        length=l;
        bredth=b;
     }
  float area(){
    return length*bredth;
  }
};
class square:public shape{
float side;
public:
 square(float s)
  {
   side=s;
 }
 float area(){
    return side*side;
 }
};
int main()
{shape *ptr;
int choice;
float r,l,b,s;
cout<<"Area calculator"<<endl<<"please enter your choice:  "<<endl;
cout<<"1.Circle"<<endl<<"2.Rectngel"<<endl<<"3.Square"<<endl;
cin>>choice;

switch(choice){
case 1:
cout<<"Enter radius:";
cin>>r;
ptr=new circle(r);
break;
case 2:
cout<<"enter length and bredth";
cin>>l>>b;
ptr=new rectangle(l,b);
break;
case 3:
cout<<"enter length of side";
cin>>s;
ptr=new square(s);
break;
default:
  cout<<"invalid choice";
   return 0;
}
cout<<"Area = "<<ptr->area()<<endl;
return 0;

}