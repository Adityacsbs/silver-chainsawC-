#include<iostream>
#include<cmath>

using namespace std;

void prime(int n){
    int count=0;
    if(n==0||n==1){
        cout<<"not a prime number"<<endl;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>0){
        cout<<"not a prime number "<<endl;
    }
    else{
        cout<<"prime number";
    }
}
int main (){
    int n;
    cin>>n;
    prime(n);
    return 0;
}