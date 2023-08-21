#include<iostream>
using namespace std;


//throw and catch basically communicating btween function 
//so if the calling function return somtehing not the exact result the the function should throw the result

int division(int x,int y){
    if(y==0){
        throw 1;
    }
    return x/y;

}

int main(){
    int a,b,c;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    try{
        c=division(a,b);



    }
    catch(int s){
        cout<<"can not divide by zero "<<endl;

    }
    return 0;

}