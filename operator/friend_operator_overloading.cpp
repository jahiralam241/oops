#include<iostream>
using namespace std;

class complex{
   private:
      int real;
      int img;
   public:
       complex(int r=0,int i=0){
          real=r;
          img=i;

}   
friend complex operator+(complex c1,complex c2);

 int getreal(){
    return real;

 }
 int getimg(){
    return img;

 }


};
complex operator+(complex c1,complex c2){
    complex t;
    t.real=c1.real+c2.real;
    t.img=c1.img+c2.img;
return t;

}



int main(){


    complex c1(4,5);
    complex c2(10,4);
    complex c3;

    c3=c1+c2;
cout<<c3.getreal()<<endl;
cout<<c3.getimg()<<endl;
return 0;

    

}