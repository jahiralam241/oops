#include<iostream>
using namespace std;
class test{
    private:int a;
    protected: int b;
    public:int c;
    friend void fun();
    
};
void fun(){
    test t;
    t.a=16;
    t.b=10;
    t.c=6;

}