#include<iostream>
using namespace std;
class Counter{
private:int count;
public:
Counter():count(0){};
int get(){
 return count;
}
void operator --(){
    count--;
}
void operator ++(){
    count++; 
}
};
int main(){
Counter C;
++C;
cout<<C.get()<<endl;
++C;
cout<<C.get()<<endl;
--C;
cout<<C.get()<<endl;
--C;
cout<<C.get();
}