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
   return 0;
   
}