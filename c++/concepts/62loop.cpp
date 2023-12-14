#include<iostream>

using namespace std;

int main (){

    int arr[]  {1,2,3,4,5,6,7,8,9};

    for(auto element : arr){
        cout<<element<<" ";
    }
cout<<endl;
    string arr1[] {"adityaraj","raviraj","singh","chouhan"};
 for(auto element : arr1){
    cout<<element<<" ";
 }

 char arr3[] {'a','b','b'};

 for(auto element :arr3){
    cout<<element<<" ";
 }

 for(int i=0,j=10,k=20;(i+j+k)<100;i++,j--,i+=k){
    cout<<i<<" "<<j<<" "<<k<<endl;
 }
    return 0;
}