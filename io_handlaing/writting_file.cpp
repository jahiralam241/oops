#include<iostream>
#include "original.cpp"
#include<fstream>
int main(){
    int n;
    cin>>n;

    item *p[n];
    string name;
    float price;
    int qty;
    for(int i=0;i<n;i++){
        cout<<"enter"<<i+1<<"iteam detail in the form of name ,price,quantity"<<endl;
         cin>>name>>price>>qty;
         p[i]=new item(name,price,qty);

    }
 
ofstream file;
file.open("item.txt");
for(int i=0;i<n;i++){
    file<<*p[i];

}
ifstream ifs;
ifs.open("item.txt");

item t;

for(int i=0;i<n;i++){
  ifs>>t;
  
cout<<t;

}


    return 0;

}