#include<iostream>
#include"original_code.cpp"
#include<fstream>
#include<vector>

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

item m;


for(int i=0;i<n;i++){
    ifs>>m;
    cout<<m;
    


}




}