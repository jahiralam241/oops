#include<iostream>
#include<fstream>

using namespace std;

class account{
    private:

      string fname;
      string lname;
      int balance;
      int account_number;
      static int newaccount_number;


      public:
      account(){};
      account(string fn,string ln,int bal){
        newaccount_number++;
        fname=fn;
        lname=ln;
        balance=bal;
        account_number=newaccount_number;

      }
      static void setlastaccnumber(int n){
        newaccount_number=n;
        
      }
       int get_newaccount_number(){
        return account_number;
        

      }
      int getbalance(){
        return balance;

      }
      int withdrawl(int amt){
        balance-=amt;
        return balance;

      }
      int diposite(int amt){
        balance+=amt;
        return balance;     

      }
friend ofstream & operator<<(ofstream &file,account &a);
friend ifstream & operator>>(ifstream &file,account &a);
friend ostream &operator<<(ostream &os,account &a);

};
int account::newaccount_number=0;

 ofstream & operator<<(ofstream &file,account &a){
     file<<a.account_number<<endl;
     file<<a.fname<<endl;
     file<<a.lname<<endl;
     file<<a.balance<<endl;
     return file;

}
 ifstream & operator>>(ifstream &file,account &a){
    file>>a.account_number>>a.fname>>a.lname>>a.balance;
    return file;


 }
 ostream &operator<<(ostream &os,account &a){
    os<<"account number"<<a.account_number<<endl;
    os<<"first name"<<a.fname<<endl;
    os<<"last name"<<a.lname<<endl;
    os<<"balance "<<a.balance<<endl;
    return os;



 }
