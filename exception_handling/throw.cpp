#include<iostream>
using namespace std;


int division(int x,int y)
{
    if(y==0){
        throw string("ok");

    }
    return x/y;

}
int main(){
    int a,b,c;
    cout<<"a"<<endl;
    cin>>a;
    cout<<"b"<<endl;
    cin>>b;
    try{
        

        c=division(a,b);
        cout<<c<<endl;

    }
    catch(string e){
        cout<<"can not divides by zero"<<endl;

    }
    return 0;

}