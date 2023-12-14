#include<iostream>

using namespace std;
int convert(string str){
    int dec =0;
    int base = 1;
    int len = str.length();

    for(int i=len-1;i>=0;--i){
        if(str[i]=='1'){
            dec = base + dec;
        }
        base = base *2;
    }
    return dec;
}

int main (){
    string a ;
    cin>>a;
    int m = convert(a);
    cout<<m<<endl;

    return 0;
}