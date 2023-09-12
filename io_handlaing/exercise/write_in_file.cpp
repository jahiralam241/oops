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



ofstream & operator<<(ofstream &file,item &i){
  file<<i.name<<endl;
  file<<i.price<<endl;
  file<<i.quantity<<endl;

 return file;

    
}
int getn(int n){
    return n;

}
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

    return 0;

}