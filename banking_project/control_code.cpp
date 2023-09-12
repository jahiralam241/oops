#include<iostream>
#include "bank.cpp"
using namespace std;
int main(){
    int choice;
    bank b;
    account a;
    string fname,lname;
    int bal,accno;
    cout<<"welcome to svi bank"<<endl;
    do{
        cout<<endl;
        cout<<endl;

        cout<<" 1 for oepn new account in our bank"<<endl;
        cout<<" 2 for diposite money"<<endl;
        cout<<" 3 for withdrawl money"<<endl;
        cout<<" 4 for check balance of your account"<<endl;
        cout<<" 5 for show all account in our bank"<<endl;
        cout<<" 6 for delete  your account"<<endl;
         cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<" enter your first name"<<endl;
            cin>>fname;
            cout<<"enter your last name"<<endl;
            cin>>lname;
            cout<<"enter account opening balance (MIN 500)"<<endl;
            cin>>bal;
            a=b.open_account(fname,lname,bal);
            cout<<" congratulation accounte is created sucessfully"<<endl;
            cout<<a;
            break;
        case 2:
              cout<<"enter your account number"<<endl;
              cin>>accno;
              cout<<"enter amount"<<endl;
              cin>>bal;
              a=b.diposite(accno,bal);
              cout<<a;
              break;
               
        case 3:
             cout<<"enter account numevr"<<endl;
             cin>>accno;
             cout<<"enter your amount "<<endl;
             cin>>bal;
             a=b.check_balance(accno);
             if(a.getbalance()-bal<500){
                cout<<"soory you can not withdraw "<<" "<<bal<<endl;

             }
             else{
             a=b.withdrawl(accno,bal);
             cout<<a;
             }
             break;
        case 4:
           cout<<"enter you account number"<<endl;
           cin>>accno;
           a=b.check_balance(accno);
           cout<<a;
           break;
           case 5:
           b.showall_account();
           break;
           case 6:
           cout<<"enter your account number"<<endl;
           cin>>accno;
           b.delete_account(accno);
           break;
        default:
        cout<<"thank you vist again"<<endl;

        cout<<"enter valid input for avail bank services"<<endl;
        
            break;
        }
    }while(choice!=0);
    return 0;

}