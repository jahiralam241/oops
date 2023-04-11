#include<iostream>
using namespace std;



class rectangle{
    private:
     int length;
     int breadth;
    public:
    rectangle(){     //so thisis the default and non parameterised constructor 
        length=0;
        breadth=0;

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
    int area(){
        return length*breadth;

    }

int getlength(){
    return length;

}
int getbreadth(){
    return breadth;

}


};

int main(){
    rectangle r;
    cout<<r.getlength()<<endl;
    cout<<r.getbreadth()<<endl;
    r.setlength(10);
    r.setbreadth(5);
    cout<<r.area()<<endl;
    cout<<r.getlength()<<endl;
    cout<<r.getbreadth()<<endl;


    return 0;

}













