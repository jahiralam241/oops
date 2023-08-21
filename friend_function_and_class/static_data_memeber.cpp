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



};
int test::count=0;
int main(){

 cout<<test::count<<endl;
 test r1,r2;

 cout<<r1.count<<endl;
 cout<<r2.count<<endl;
  test::count=7;
  cout<<test::count;
 return 0;


}