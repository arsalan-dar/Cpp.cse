#include <iostream>
using namespace std;

class mediafile{
public:
virtual void play()=0;
};

class Audio:public mediafile{
public:
  void play(){
    cout<<"playing audio"<<endl;
  }
};
class Video:public mediafile{
public:
  void play(){
    cout<<"playing video"<<endl;
  }
};
class Image:public mediafile{
public:
  void play(){
    cout<<"displaying image"<<endl;
  }
};
int main(){
mediafile *playlist[3];
 playlist[0]=new Audio();
 playlist[1]=new Video();
 playlist[2]=new Image();

 for(int i=0;i<3;i++){
    playlist[i]->play();
 }
return 0;

}
