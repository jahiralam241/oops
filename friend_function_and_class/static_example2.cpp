#include<iostream>
using namespace std;

class student{
    public:
      int roll;
      static int addno;
      student(string n){
        name=n;
         addno++;

        roll=addno;

      }
      string name;
      void display(){
        cout<<"name "<<name<<"roll no -"<<roll<<endl;

      }

};
int student ::addno=0;
int main(){
    student s("jahir");
    student s2("alam");
    s.display();
    s2.display();
    cout<<student::addno<<endl;
    
    return 0;



}
