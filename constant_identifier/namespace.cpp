#include<iostream>
using namespace std;

namespace first{
void fun(){
    cout<<"first"<<endl;

}}
namespace secound{
void fun(){
    cout<<"secound"<<endl;

}}

int main(){
    first::fun();
    secound::fun();
        return 0;

}