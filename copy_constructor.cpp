#include<iostream>
using namespace std;



class rectangle{
    private:
     int length;
     int breadth;
    public:
    rectangle(int l,int b){     //so thisis the default and non parameterised constructor 
        setlength(l);
        setbreadth(b);


    }
    rectangle(rectangle &r){
        setlength(r.length);
        setbreadth(r.breadth);

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
    

   rectangle r(10,5) ;



    
    cout<<r.area()<<endl;
    cout<<r.getlength()<<endl;
    cout<<r.getbreadth()<<endl;

    rectangle r2(r);
    
  cout<<r2.area()<<endl;
    cout<<r2.getlength()<<endl;
    cout<<r2.getbreadth()<<endl;

    return 0;

}













