#include<iostream>
using namespace std;



class rectangle{
private:
  int length;
  int breadth;
public:
   rectangle();
   rectangle(int l,int b);
   rectangle(rectangle &r);
   int getlength(){return length;};
   int getbreadth(){return breadth;};
   void setlength(int l);
   void setbreadth(int b);
   int area();
   int perimeter();
}



class cuboid :public rectangle{
private:
  int height;
public:
   cuboid(int h=0){
    height=h;

   }
   int getheight(){
    return height;

   }

void setheight(int h){
    height=h;

}
int volume(){
    return getlength()*getbreadth()*height;

}


};












rectangle ::rectangle(){
    length=1;
    breadth=1;


}
rectangle :: rectangle(int l=0,int b=0){
    length=l;
    breadth=b;



}
rectangle :: rectangle(rectangle &r){
    length=r.getlength();
    breadth=r.getbreadth();
    ;
    

}

void rectangle :: setlength(int l){
    length=l;

}
void rectangle :: setbreadth(int b){
    breadth=b;

}
int rectangle :: area(){
    return length*breadth;


}
int rectangle :: perimeter(){
    return 2*(length+breadth);
    
}
int main(){
    rectangle r(5,6);
    cout<<r.area()<<endl;



    cuboid r1(5);
cout<<r1.volume()<<endl;


cuboid c(5);
c.setlength(6);
c.setbreadth(7);
cout<<c.volume();
return 0;



}