#include<iostream>
using namespace std;

class item{
    public:
      string name;
      float price;
      int quantity;

item(){}
item(string n,float p,int q){
  name=n;
  price=p;
  quantity=q;

}
void setname(string name){
  this->name=name;

}
void setprice(float p){
  price=p;

}
void setquantity(int x){
  quantity=x;

}

};
  

