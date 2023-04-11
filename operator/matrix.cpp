#include<iostream>
using namespace std;




class matrix{
    public:
     int row;
     int col;
     int a[5][5]; 

     int getrow(){
        return row;
     }
     int getcol(){
        return col;
     }

      matrix(int r=0,int c=0){

        row=r;
        col=c;

        for (int i=0;i<r;i++){
            for (int j=0;j<c;j++){
               cin>> a[i][j];
            }
        }
       }

       matrix operator*(matrix x){
        matrix temp;
           for(int i=0;i<row;i++){
            for(int j=0;j<x.col;j++){
                temp.a[i][j]=0;
                for(int k=0;k<col;k++){
                    temp.a[i][j]=temp.a[i][j]+a[i][k]*x.a[k][j];

                }
            }
           }
           return temp;

       }


};

int main(){
    int r1;
    cout<<"enter 1st matrix row number"<<endl;
    cin>>r1;
    int co1;
    cout<<"enter 1st matrix col"<<endl;
    cin>>co1;

cout<<"enter 1st matrix"<<endl;
 matrix c1(r1,co1);
    int r2;
    cout<<"enter row  matrix row number"<<endl;
    cin>>r2;
    int co2;
    cout<<"enter 2nd matrix col"<<endl;
    cin>>co2;

      if(r1 != co2){
        cout<<"row of 1st matrix and col of 2nd matrix must be same"<<endl;
        return 0;

      }

    
      cout<<"enter 2nd matrix"<<endl;

    matrix c2(r2,co2);
   
    matrix c3;
    c3=c1*c2;
 
 cout<<"matrix multiplicatiton of this two matrix"<<endl;

for (int i=0;i<r1;i++){
    for(int j=0;j<co2;j++){
        cout<<c3.a[i][j]<<" ";

    

    }
    cout<<endl;

   }
    
}


