#include<iostream>
using namespace std;


int main(){
    int x=10;
    const int *ptr=&x;
    int y=20;
    ptr=&y;

  // ++*ptr; can not modify but point differnt varialble;
  
    cout<<*ptr<<"  "<<x<<endl;
    return 0;

}