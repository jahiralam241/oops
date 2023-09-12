#include<iostream>
using namespace std;
void fun( const int &x,int &y){
      x++;   //now it can not be modified 
      cout<<x<<" "<<y<<endl;
}
int main(){
    int a=10,b=20;
    fun(a,b);
    return 0;

}