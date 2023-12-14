#include<iostream>
#include<cmath>
using namespace std;
class prime{
 public:

 void prime1(int n){

    bool flag=0;
    
    for(int i=2;i<sqrt(n);i++){

        if(n%i==0){
            cout<<"not a prime number "<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
    
        cout<<"prime number "<<endl;
    }

 }
};
int main (){
    prime a;
    a.prime1(6);

    return 0;
}