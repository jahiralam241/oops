#include<iostream>
using namespace std;


class employee{
    private:
       int id;
       string name;
    public:
      employee(int i,string n){
        id=i;
        name=n;

      }
    int getid(){return id;}
    string getname(){return name;}


};
class fulltimeemployee:public employee{
    private:
      int salary;
    public:
      fulltimeemployee(int i,string n,int sal):employee(i,n){
        salary=sal;

      }
      int getfullsalary(){return salary;}

};
class parttimeemployee: public employee{

   private:
     int salary;
     public:
       parttimeemployee(int i,string n,int sal):employee(i,n){
        salary=sal;

       }
       int getpartsalary(){return salary;
       }

};
int main(){
    fulltimeemployee f(001,"jahir",3000);
    
    parttimeemployee p(001,"jack",4000);
    //
    cout<<"i am "<<" "<<f.getname()<<endl;

    cout<<"my employee is is"<<" "<<f.getid()<<endl;

    cout<<"my current salary as a fiul time employee"<<" "<<f.getfullsalary()<<endl;
    return 0;

}