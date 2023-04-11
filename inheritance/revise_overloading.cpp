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
    friend ostream &operator<<(ostream &cout ,rational &r);


};


ostream &operator<<(ostream &cout,rational &r){
    cout<<r.p<<"/"<<r.q<<endl;
    return cout;

}
int main(){


    rational r(6,4);

    cout<<r;
return 0;

}