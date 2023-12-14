#include<iostream>

using namespace std;
class pattern{
 public:
 void pattern1(int n){

    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%4==0){
                cout<<"*"<<"";
            }
            else if(i==2 && (i+j)%2==0){
                 cout<<"*";
            }   
            else{
                cout<<" ";
            }
                 }
                 cout<<endl;
    }
 }
};
int main (){
    int n;
    cin>>n;

    pattern obj;
    obj.pattern1(n);

    return 0;
}