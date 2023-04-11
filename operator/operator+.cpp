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
     complex operator+(complex x){
        complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;

  
   }

 int getreal(){
    return real;

 }
 int getimg(){
    return img;

 }



};

int main(){

    complex c1(4,7);
    complex c2(5,6);
    complex c3;
    c3=c1+c2;

    cout<<c3.getreal()<<" +"<<c3.getimg()<<"i"<<endl;


return 0;

}