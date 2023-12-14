#include<iostream>
#include<math.h>

using namespace std;

void armstrong(int n){

    long sum=0;
    while(n>0){
        int a=n%10;
         sum += pow(a,3);
        n=n/10;
    }
    cout<<sum<<endl;
    if(n==sum){
        cout<<"armstrong number"<<endl;
    }else{
        cout<<"not armstrong number"<<endl;
    }
}

int main (){
    int n;
    cin>>n;

    armstrong(n);
    return 0;
}