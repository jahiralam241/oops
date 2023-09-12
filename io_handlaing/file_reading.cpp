#include<iostream>
#include<fstream>
using namespace std;
class student{
    public:
     string name;
     int roll;
     string brach;
friend ifstream & operator<<(ifstream &file,student &s);

};
ifstream & operator>>(ifstream &file,student &s){
      file>>s.name>>s.roll>>s.brach;

      return file;


    
}

int main(){
    ifstream file;
    file.open("student.txt");
    

    student s;
    file>>s;

    file.close();
    if(!file.is_open()){
        cout<<"cout closed"<<endl;

    }

    cout<<s.name<<endl;
    return 0;




}