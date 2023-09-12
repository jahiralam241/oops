#include<iostream>
using namespace std;



class test{
    public:
      test(){
        cout<<"test is created "<<endl;

      }
      ~test(){
        cout<<"test is deleted"<<endl;

      }

};
void fun(){
    test t;

}
int main(){
     fun();
     return 0;



}
/*

so as you can seee the terminal the after complition of the fun() the object is is deleted because the the activation record is gone 
*/