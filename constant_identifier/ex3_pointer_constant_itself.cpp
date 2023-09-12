#include<iostream>
using namespace std;


int main(){
    int x=10;
     int * const ptr=&x;//ptr constant of type integer pointer
     ++*ptr;// i can still modify the valu of the varialble 
  int y=30;
 // ptr=&y; but can not point any other variable

  
    cout<<*ptr<<"  "<<x<<endl;
    return 0;

}