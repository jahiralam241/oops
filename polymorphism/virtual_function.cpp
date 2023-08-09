#include<iostream>
using namespace std;
class base{
    public:
      virtual void fun(){
        cout<<"fun of base class"<<endl;

      }
};

class derived:public base{
    public:
      void fun(){
        cout<<"fun of derived class"<<endl;
        
      }
};
int main(){
    base *p=new derived();
    p->fun();//this will class  the funtion of derived class ......so that will work now base on the object not based on the pointerc
    return 0;

}