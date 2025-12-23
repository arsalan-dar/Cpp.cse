#include<iostream>
using namespace std;
class counter{
private:int count;
public:
counter():count(0){};
int getcount(){
   return count;
}
void operator ++(){
    ++count;
}
void operator --(){
    --count;
}

};
int main(){
counter C;
++C;
++C;
--C;
cout<<C.getcount();

}
