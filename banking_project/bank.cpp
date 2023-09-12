#include<iostream>
#include "account.cpp"
#include<fstream>
#include<vector>
#include<map>
using namespace std;
class bank{
    private:
       map<int,account> m;
       public:
          bank();


          account  open_account(string fn,string ln,int bal);
          account diposite(int account_number,int amt);
          account withdrawl(int account_number,int amt);
          account check_balance(int account_number);
          void showall_account();
          void delete_account(int account_number);
          ~bank();
};
bank::bank(){
    account s;
   ifstream ifs;
   ifs.open("bankdata.txt");
   if(!ifs){
    cout<<"file is not found "<<endl;
    cout<<"bank data file created successfully"<<endl;
    
    return ;

   }
    while(!ifs.eof()){
          ifs>>s;
          int temp=s.get_newaccount_number();
          m.insert(pair<int,account> (temp,s));
    }
    account::setlastaccnumber(s.get_newaccount_number());


   ifs.close();
   

}

account bank::open_account(string fn,string ln,int bal){
  

    account act(fn, ln, bal);
    int p=act.get_newaccount_number();
    m.insert(pair<int,account> (p,act));
    ofstream file;
    file.open("bankdata.txt");
    map<int,account> ::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
        file<<itr->second;


    }
    file.close();
    return act;


}
account bank::diposite(int account_number,int amt ){
    map<int,account> ::iterator itr=m.find(account_number);
    itr->second.diposite(amt);
    return itr->second;

}
account bank::withdrawl(int account_number,int amt ){

    map<int,account> ::iterator itr=m.find(account_number);

    itr->second.withdrawl(amt);
    return itr->second;
    
}

account bank::check_balance(int account_number){
    map<int,account> ::iterator itr=m.find(account_number);
    itr->second.getbalance();
    return itr->second;
    
}
void bank::showall_account(){
    map<int,account> ::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
           cout<<itr->first<<" "<<itr->second<<endl;

    }
}
    void bank::delete_account(int account_number){
        map<int,account> ::iterator itr=m.find(account_number);
    cout<<"account deleted"<<" "<<itr->second;
      m.erase(account_number);

    }
    bank::~bank(){
        ofstream file;
        file.open("bankdata.txt",ios::trunc);
        map<int,account> ::iterator itr;
        for(itr=m.begin();itr!=m.end();itr++){
            file<<itr->second;
            

        }
        file.close();

    }