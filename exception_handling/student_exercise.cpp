#include<iostream>
using namespace std;
class stackoverflow:exception{};
class stackunderflow:exception{};
class stack{
    private:
      int *ptr;
      int top=-1;
      int size;
    public:
      stack(int s){
        size=s;
        ptr=new int [size];
      }
    void push(int a){
        if(top==size-1){
            throw stackoverflow();
            
        }
        top++;
        ptr[top]=a;

    }
    void pop(){
        if(top==-1){
            throw stackunderflow();

        }
        top--;

    }
    void display(){
cout<<"your current stack is"<<endl;

      for(int i=0;i<top;i++){
        cout<<ptr[i]<<"   ";

      }
    }
};


int main(){
    int ch;

    stack s(6);

    cout<<" enter 1 to add element in stack"<<endl;
    cout<<"enter 2 to pop emlement from stack"<<endl;
    cout<<"enter 3 to display your stack"<<endl;
    cin>>ch;
    while(ch!=0){
           
switch(ch){

    case 1:
          try{
            int a;

            cout<<"enter elemet to add"<<endl;
            cin>>a;
            s.push(a);

          }
          catch(stackoverflow){
            cout<<"stack is full"<<endl;

          }

          break;

     case 2:
         try{
            s.pop();

         }
         catch(stackunderflow){
            cout<<"stack is all ready empty"<<endl;

         }
         break;

     case 3:
             s.display();
             break;

      default:
         cout<<"please put correct input"<<endl;


}

    cout<<" enter 1 to add element in stack"<<endl;
    cout<<"enter 2 to pop emlement from stack"<<endl;
    cout<<"enter 3 to display your stack"<<endl;
    cin>>ch;
    
    }

return 0;

}