#include<iostream>
using namespace std;

class rectangle{
    private:
     int length;
     int breadth;
public:
     void setlength(int l){
        if(l>=0)
        length=l;
        else
        length=0;
     }
     void setbreadth(int b){
        if (b>=0)
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

     int area(){
        return length*breadth;
     }
     int perimeter(){
        return 2*(length+breadth);

     }


};

int main(){
    rectangle r;
     cout<<r.area();
    return 0;

}





