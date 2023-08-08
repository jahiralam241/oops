#include<iostream>
using namespace std;

class base{
public:
   void fun1(){
    cout<<" fun1 of base"<<endl;

   }
};
class derived:public base{

public:
   void fun2(){
    cout<<"fu2 of drived class"<<endl;

   }



};
int main(){
    derived d;
    base *ptr=&d;

    ptr->fun1();
    //ptr->fun2();//can not call the funtion of derived class though the object is of derived class 

    return 0;


}