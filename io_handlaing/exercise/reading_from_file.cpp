#include<iostream>
#include"original.cpp"
#include<fstream>
ostream & operator<<(ostream &os,item &i){
    os<<i.name<<endl;
    os<<i.price<<endl;
    os<<i.quantity<<endl;
    return os;
  }
ifstream & operator>>(ifstream &ifs,item &i){
  ifs>>i.name>>i.price>>i.quantity;
  return ifs;
}
int main(){
int n;
cin>>n;

ifstream ifs;
ifs.open("item.txt");

item t;

for(int i=0;i<n;i++){
  ifs>>t;
  
cout<<t;

}
}