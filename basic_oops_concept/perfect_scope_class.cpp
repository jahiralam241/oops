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
      void setlength(int l);
      void setbreadth(int b);
      int getlength(){
        return length;

      }
      int getbreadth(){
        return breadth;

      }
      int area();
      int perimeter();
      bool issquare();
~rectangle();


};

int main(){

rectangle r(10,10);
cout<<r.area()<<endl;
cout<<r.perimeter();
if(r.issquare()){
    cout<<"yes it is square";


}
return 0;


}

rectangle ::~rectangle(){
    cout<<"reftangle distroyed"<<endl;
    
    
}






bool rectangle:: issquare(){
    return length==breadth;

}








rectangle::rectangle(){
    length=1;
    breadth=1;



}


rectangle::rectangle(int l,int b){
    setlength(l);
    setbreadth(b);

}
rectangle::rectangle(rectangle &r){

    length=r.length;

    breadth=r.breadth;

}

void rectangle::setlength(int l){
    if(l>0)
    length=l;
    else 
    length=0;

}
void rectangle::setbreadth(int b){
    if(b>0)
    breadth=b;
    else breadth=0;

}

int rectangle::area(){
    return length*breadth;

}
int rectangle ::perimeter(){
    return 2*(length+breadth);

}