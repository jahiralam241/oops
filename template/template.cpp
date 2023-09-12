#include<iostream>
using namespace std;
template<class T>

class stack{
    private:
      T *ptr;
      int top;
      int size;
    public:
       stack(int s){
        size=s;
        top=-1;
        ptr=new T[size];

       }
       void push(T x);
       T  pop();


};
template<class T>

void stack<T>::push(T x){
    if(top==size-1){
        cout<<"stack is full";


    }
    top++;
    ptr[top]=x;

}
template<class T>

T  stack<T>::pop(){
if(top==-1){
    cout<<"stack is a ready empty"<<endl;

}
int x=ptr[top];
top--;

}
int main(){
    stack<int> s(6);
    s.push(5);
    s.push(7);

}