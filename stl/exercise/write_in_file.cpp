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
    
    vector<item *> p;


    string name;
    float price;
    int qty;
    for(int i=0;i<n;i++){
        cout<<"enter"<<i+1<<"iteam detail in the form of name ,price,quantity"<<endl;
         cin>>name>>price>>qty;
       p.push_back(new item(name,price,qty));



    }
 
ofstream file;
file.open("item.txt");

vector<item *>::iterator itr;
for(itr=p.begin();itr!=p.end();itr++){
    file<<**itr;



}


   return 0;

}