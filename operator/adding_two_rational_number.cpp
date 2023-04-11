
#include<iostream>
using namespace std;
class rational{
    private:
     int p;
     int q;
public:
   rational(int p=0,int q=0){
    this->p=p;
    this->q=q;
   }
   friend rational operator+(rational c1,rational c2);
   friend ostream &operator<<(ostream &o,rational c);
};
rational operator+(rational c1,rational c2){
    rational t;
    t.p=(c2.q*c1.p)+(c1.q*c2.p);
    t.q=c1.q*c2.q;
    return t; 
}
ostream &operator<<(ostream &o,rational c){
    o<<c.p<<"/"<<c.q<<endl;
    return o;
}
int main(){
    rational c1(3,4),c2(4,5),c3;
    c3=c1+c2;
    cout<<c3;
    return 0;
}