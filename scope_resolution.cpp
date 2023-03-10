#include<iostream>
using namespace std;
class rectangle{

private:
   int length;
   int breadth;
   public:
       rectangle(int l=0,int b=0){
        setlength(l);
        setbreadth(b);

       }
       void setlength(int l){
        if(l>0)
        length=l;

       }
       void setbreadth(int b){
        breadth=b;

       }
      int area(){
        return length*breadth;
      }

    int perimeter();



       

};

 int rectangle::perimeter(){
    return 2*(length+breadth);

 }



int main(){
    rectangle r(10,5);


    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    return 0;


}
