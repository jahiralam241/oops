#include<iostream>
using namespace std;
#define PI 3.14
#define c cout
#define max(x,y) (x>y?x:y)
#define msg(x) #x
#ifndef PI

       #define PI 8
#endif

int main(){
    c<<PI<<endl;

    c<<max(8,9)<<endl;
    c<<msg(i am jahir )<<endl;



    return 0;

}

