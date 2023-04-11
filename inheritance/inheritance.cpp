#include<iostream>
using namespace std;



class base{


public:
int a;

  void display(){
     cout<<"display from base class"<<endl;  
  }
};
class derived : public base{

public:

  void show(){
    cout<<"display from derived class"<<endl;
}
};

int main(){
    derived d;
    d.a=10;
    cout<<d.a<<endl;
    

}