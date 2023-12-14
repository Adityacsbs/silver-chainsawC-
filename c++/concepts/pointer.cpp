#include<iostream>

using namespace std;

int main (){

    int a = 32;
    int *ptr = &a;// address  of a is stored in pointer by using "&"
    

    cout<<ptr<<endl;// address of a 
    cout<<*ptr<<endl; //value of a 

    return 0;
}