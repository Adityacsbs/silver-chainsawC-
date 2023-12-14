#include<iostream>
#include<cmath>

using namespace std;

int convert(long long n){
    int dec = 0, i =0, rem;
    while(n!=0){
        rem = n%10;
        n = n/10;
        dec = dec + rem * pow(2,i);
        ++i;
    }
    return dec;
}

int main (){
    int n;
    cin>>n;
    int m = convert(n);
    cout<<m<<endl;


    return 0;
}