#include<iostream>
using namespace std;
class base{
    public:
      base(){cout<<"non parameter base "<<endl; }
      base(int x){cout<<"parametre base"<<endl;}


};
class derived:public base{
    public:
      derived(){cout<<"non paramter derived"<<endl;}
      derived(int x){cout<<"parameter derived"<<endl;}
      derived(int x,int y):base(y){cout<<"both parameter"<<endl;}//this is inportant please revisit your copy to recall

};

int main(){
    derived r1;
    derived r2(10);

    derived r(5,6);

    return 0;


}