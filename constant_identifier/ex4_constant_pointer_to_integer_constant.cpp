#include<iostream>
using namespace std;


int main(){
    int x=10;
    const int * const ptr=&x;
    ++*ptr;//can not modify

    int y=20;
    ptr=&y;//can not pint to any other 

  
    cout<<*ptr<<"  "<<x<<endl;
    return 0;

}