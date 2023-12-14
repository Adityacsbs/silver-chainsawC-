#include<iostream>

using namespace std;

int main (){

    int a;
    cout<<"enter the number :-"<<endl;
    cin>>a;
    static int m = 1;
    for(int i = 1; i<= a; i++){
        m = m + 2;
        if(m)
        
    }
    cout<<m<<endl;


    return 0;
}