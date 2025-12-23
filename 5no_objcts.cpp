#include<iostream>
using namespace std;
class counter{
private:static int count;
public:
counter(){
    count++;
}
static void show(){
cout<<count;
}

};
int counter::count=0;
int main(){
counter a,b,c,d;
counter::show();

}