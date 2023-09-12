#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file("my.txt");
    if(file)cout<<"yeas file is now open"<<endl;

    string s;
    int x;
    string b;
    file>>s>>x>>b;
    file.close();
    if(!file)cout<<"file is close "<<endl;

    cout<<"name"<<s<<endl;
    cout<<"roll"<<x<<endl;
    cout<<"brach"<<b<<endl;
    return 0;

}