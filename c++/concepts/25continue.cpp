#include<iostream>

using namespace std;

int main(){

      int j,n;
      cout<<"enter a number n:-";
      cin>>n;

      cout<<"enter number j:- "<<endl;
      cin>>j;
      
       for(int i=1;i<11;i++){
        if(i==j){
          continue;
        }
        cout<<n<<"*"<<i<<"="<<i*n<<endl;
       }


    return 0;
}