#include<iostream>
#include<map>
using namespace std;


int main(){
    map<int,string> m;
    m.insert(pair<int ,string>(1,"jahir"));
       m.insert(pair<int ,string>(2,"jack"));
          m.insert(pair<int ,string>(3,"beauty"));

          map<int,string> ::iterator itr;
          for(itr=m.begin();itr!=m.end();itr++){
            cout<<itr->first<<"  "<<itr->second<<endl;

          }
            map<int,string> ::iterator itr1;
            itr1=m.find(2);
            cout<<"memeber found"<<endl;

            cout<<itr1->first<<" "<<itr1->second<<endl;
            
return 0;

}