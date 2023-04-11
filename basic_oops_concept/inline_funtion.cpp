#include<iostream>
using namespace std;

class test{
    public:
      void fun(){
        cout<<"i am inline funtion "<<endl;
      }
      void fun2();
      inline void fun3();

};
void test::fun2(){
    cout<<"i am not inline funtion"<<endl;

}
void test::fun3(){
    cout<<"i am inline but witten out side the box"<<endl;

}
int main(){
    test r;
    r.fun();
    r.fun2();
    r.fun3();
    return 0;

}