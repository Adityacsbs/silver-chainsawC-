#include<iostream>

using namespace std;
 class pattern{
 public:
          
          void pattern1(int n){
             
             for(int i=1;i<=n;i++){
                for(int k=1;k<=n-i;k++){
                    cout<<" ";
                }
                for(int j=1;j<=i;j++){
                    cout<<j<<" ";
                }
                cout<<endl;
             }

          }
 };

int main (){
    int n;
    cout<<"enter the number:-"<<endl;
    cin>>n;
    cout<<endl;
    pattern obj;
    obj.pattern1(n);

    return 0;
}