#include<iostream>
using namespace std;

class test{
   public:
       int a;
       static int count;
       test(){
        a=10;
        count++;

       }
      static int getcount(){
       // a++; this is not allowed to access non static function by static function
       return count;


       }



};
int test::count=0;
int main(){

test r1;
test::count=10;
cout<<r1.getcount()<<endl;
cout<<test::getcount()<<endl;


 return 0;


}