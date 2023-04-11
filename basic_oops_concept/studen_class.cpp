#include<iostream>
using namespace std;


class student{
private:
  int roll;
  string name;
  int mathmarks;
  int phymarks;
  int chemarks;
public:

   student(int r,string n,int m,int p,int c){
    roll=r;
    name=n;
    mathmarks=m;
    phymarks=p;
    chemarks=c;

   }

   int total();
   int percentage();

};


int student::total(){
    return (mathmarks+phymarks+chemarks);

}
int student::percentage()
{
    int p=total();
    return (p*100)/300;
   
}


int main(){



    int n;
    cout<<"enter your roll number"<<endl;
    cin>>n;
    string name;
    cout<<"enter your name "<<endl;
    cin>>name;
    int a,m,c;

    cout<<"enter your markes"<<endl;
    
    cin>>m;
    cin>>a;

    cin>>c;

    student p(n,name,m,a,c);



    
    cout<<p.total()<<endl;
    if(p.percentage()>=60){
        cout<<"grade is"<<" "<<"A"<<endl;

       
    }
    else if(p.percentage()>=40 && p.percentage()<60){
        cout<<"garde"<<" "<<"B"<<endl;

    }else{
        cout<<"you r fail bro"<<endl;

    }



    return 0;

}