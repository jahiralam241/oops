#include<iostream>
#include<fstream>
using namespace std;
int main(){

        cout<<"enter your file name"<<endl;
        string n;
        getline(cin,n);
        ofstream file;
        file.open(n);
        if(file.is_open()){
            cout<<"file creation sucess"<<endl;
            
        }
        file.close();
        return 0;

}