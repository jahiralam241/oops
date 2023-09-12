#include<iostream>
#include<fstream>
using namespace std;

class student{
    public:
      string name;
      int roll;
      string brach;
friend ofstream & operator<<(ofstream &file,student &s){
        file<<s.name<<endl;
        file<<s.roll<<endl;
        file<<s.brach<<endl;
        return file;

}
};
int main(){
    student s;
    ofstream file("student.txt",ios::trunc);
    s.name="jahir";
    s.roll=1;
    s.brach="cse";
    file<<s;
    file.close();
    return 0;
     

}