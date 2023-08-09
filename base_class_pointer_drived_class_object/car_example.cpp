#include<iostream>
using namespace std;


class basicar{
    public:
      void start(){
        cout<<"car started"<<endl;

      }
};
class advancedcar:public basicar{

    public:
      void playmusic(){
        cout<<"playing music"<<endl;

      }

};

int main(){
   basicar *p=new advancedcar();
   p->start();
  // p->playmusic(); so though it is advanced car as iam pointing it as only a basic car tha is whu=y we can not  call the funtion 

   return 0;

}