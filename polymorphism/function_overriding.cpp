#include<iostream>
using namespace std;


class base{
   public:
     void display(){
        cout<<"display of base class"<<endl;

     }



};
class drived:public base{

public:
    void display(){
        cout<<"display of derived class"<<endl;

    }
};

int main(){
drived d;
  d.display();

  d.base::display();//

  return 0;




}