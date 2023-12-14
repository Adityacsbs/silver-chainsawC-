#include<iostream>

using namespace std;

 class pattern{
  
  public:
  void pattern1(int n){

    for(int i=1;i<=n;i++){
        int k;
         for( k=1;k<=n-i;k++){
            cout<<"  ";
         }
        int m=i;
        for(;k<=n;k++){
            cout<<m--<<" ";
        }
        m=2;
       for(;k<=n+i-1;k++){
        cout<<m++<<" ";
       } 
        cout<<endl;
    }
    
  }
 };

int main (){

    int n;
    cout<<" enter the number:-"<<endl;
    cin>>n;

    pattern obj;
    obj.pattern1(n);
    


    return 0;
}