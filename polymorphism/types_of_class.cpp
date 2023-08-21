#include<iostream>


using namespace std;


class base{
    public:
      void fun1(){

    cout<<"fun1 from base"<<endl;
      }
      virtual void fun2(){//abstract class can help full for i>reusebility (ii) and to achive polymorphism
        cout<<"fun2 from base"<<endl;

      }
      };

  class derived:public base{
    public:

       void fun2(){
    cout<<"fun2 of derived  class"<<endl;
}


  };    

  int main(){


    derived d;
    d.fun1();
    d.fun2();
    return 0;

  }