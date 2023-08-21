#include<iostream>
using namespace std;


class shape{
    public:
       virtual float area()=0;
       virtual float perimeter()=0;

};
class rectangle:public shape{
     private:
       float length;
       float breadth;
     public:
        rectangle(float len,float bre){
            length=len;
            breadth=bre;

        }  
      float area(){
        return length*breadth;

      }

     float perimeter(){
        return 2*(length+breadth);

     }

};
class circle:public shape{

private:
   float radius;
   public:
      circle(float r){
        radius=r;

      }
   float area(){
      return 3.14f*radius*radius;

   }

   float perimeter(){
    return 2*3.14f*radius;

   }

};

int main(){
    shape *p=new rectangle(3,5);
    cout<<p->area();
    cout<<endl;
    cout<<p->perimeter()<<endl;
    p=new circle(5);
    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;
    return 0;
    
}