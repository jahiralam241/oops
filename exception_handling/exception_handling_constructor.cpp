#include<iostream>
using namespace std;


int main(){



    int a=8,b=8,c;
    try{
        if(b==0){
            throw 1;

        }
        c=a/b;
        cout<<c<<endl;

    }
    catch(int x){
        cout<<"can not divide by zero"<<endl;


    }

return 0;

}



