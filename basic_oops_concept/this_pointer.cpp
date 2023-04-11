#include<iostream>
using namespace std;



class rectangle {
    private :
      int length;
      int breadth;
    public:
          rectangle(int length ,int breadth){

              this->length=length;
                this->breadth=breadth;

          }

          int getlength(){
            return length;

          }
          int getbreadth(){
            return breadth;
          }
};


int main(){
    rectangle *p=new rectangle (10,5);

    cout<<p->getlength()<<endl;
    cout<<p->getbreadth()<<endl;





    return 0;

}
