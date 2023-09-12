#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<" ok"<<endl;
    
    cout<<&a<<" "<<*b<<endl;


}
int main(){
    int x=10,y=20;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    cout<<&x<<" "<<&y<<endl;
    
    return 0;
    
}