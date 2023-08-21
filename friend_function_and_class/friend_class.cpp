#include<iostream>
using namespace std;


class my{
private:int a;
protected :int b;
public:int c;

friend class your;

    
};
class your{
    public:

    my m;
    void fun(){
        cout<<m.a<<endl;
        cout<<m.b<<endl;
        cout<<m.c<<endl;

    }
};
int main(){
   your y;
   y.fun();
   return 0;
   
}