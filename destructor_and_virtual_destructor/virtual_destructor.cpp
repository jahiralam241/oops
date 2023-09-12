#include<iostream>
using namespace std;


class base{
    public:
    base(){
        cout<<"cons of base"<<endl;

    }
     virtual  ~base(){
        cout<<"destructor of base"<<endl;

      }

};
class derived:public base{
    public:
    derived(){
        cout<<"cons of derived"<<endl;

    }
    ~derived(){
        cout<<"destructor of derived"<<endl;

    }
};
void fun(){
    base *p=new derived();
    delete p;// if  base class destructor is not virtual then it only class destructo of base not the derived class destructor

}
int main(){
    fun();
    return 0;

}