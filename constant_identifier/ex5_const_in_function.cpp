#include<iostream>
using namespace std;
class demo{
    public:
      int x=10;
      int y=20;
      void display()const// now this function ccan not modify the public memeber 
      {
        x++;
        cout<<x<<"  "<<y<<endl;
              }
};
int main(){
    demo d;
    d.display();
    return 0;
    
}