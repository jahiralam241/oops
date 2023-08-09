#include<iostream>
using namespace std;

class car{
     public:
     virtual  void start()=0;
     virtual void stop()=0;

     
};
class inova:public car{
    public:
       void start(){
        cout<<"start inova";
       }
       void stop(){
        cout<<"inova stop";

       }


};
class swift:public car{
    public:
       void start(){
        cout<<"swift started";

       }
       void stop(){
        cout<<"swift stop";

       }
};
int main(){
    car *p=new inova();
    p->start();
    cout<<endl;
    p=new swift();
    p->start();
    

    return 0;

}