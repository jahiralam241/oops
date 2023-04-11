#include<iostream>
using namespace std;


class rectangle{

     private:
     int length;
     int breadth;
     public:
     int area(){
        return length*breadth;

     }
     void setlength(int l){
        if(l>=0)
        length=l;
        else
        length=0;

     }
     void setbreadth(int b){
        if(b>=0)
        breadth=b;

        else
        breadth=0;


     }


     int getlength(){
        return length;

     }
     int getbreadth(){
        return breadth;

     }

};
int main(){
    rectangle *p=new rectangle;
    p->setlength(10);
    p->setbreadth(5);
    cout<<p->area()<<endl;
    return 0;

}