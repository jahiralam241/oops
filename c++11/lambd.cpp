#include<iostream>
using namespace std;

int main(){
    [](int x,int y){cout<<"sum"<<x+y<<endl;}(10,30);
    cout<<([](int x,int y){return x+y;}(30,70));
    cout<<endl;

     int a=[](int x,int y){return x+y;}(30,70);
    cout<<a<<endl;

    int b=[](int x,int y)->int{return x+y;}(30,70);
    cout<<b<<endl;

    
    int m=10;
    int n=9;

    [m](){cout<<m<<endl;}();

    cout<<endl;
     auto s= [m](){cout<<m<<endl;};
     s();

auto q= [&m](){cout<<++m<<endl;};
     q();
     

    

    return 0;

}