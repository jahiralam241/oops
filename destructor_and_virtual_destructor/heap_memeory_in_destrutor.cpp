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
    test *t=new test();

}//so in this program the the memory of the heap memmory is  not getting free after thhe compliction of the function so this may lead to memory leak and crash after some time
int main(){
     fun();
     return 0;



}
