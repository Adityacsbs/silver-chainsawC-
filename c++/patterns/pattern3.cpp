#include<iostream>

using namespace std;

class pattern{
 public:

 void pattern1(int n){
   for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        if((i+j)%2==0){
            cout<<"1"<<" ";

        }else{
            cout<<"0"<<" ";
        }
    }
    cout<<endl;
   }
 }
 void pattern2(int n){
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n+1-i;j++){
        if((i+j)%2==0){
            cout<<"1"<<" ";

        }else{
            cout<<"0"<<" ";
        }
    }
    cout<<endl;
   }
 }
};
int main (){

    int n;
    cout<<"enter the number:-";
    cin>>n;

    pattern obj;

    obj.pattern1(n);
    cout<<endl;
    obj.pattern2(n);


    return 0;
}