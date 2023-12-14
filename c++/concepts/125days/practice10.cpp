#include<iostream>

using namespace std;

int main (){
    int arr[]={12,13,14,15,16,17,18};
    cout<<arr<<endl;//address of first element 
    cout<<&arr[0]<<endl;
    
    cout<<arr+1<<endl;//yeah second element ka address dega   
   

    cout<<*(arr+1)<<endl;//this will give me which element is present on 2nd position of array
    cout<<*(arr+2)<<endl;
   //apan ne naye pointer ko array se assign kr diya hai toh p abb arr ko hi show krega
   int *p =arr;
   cout<<p<<endl;
   cout<<p+1<<endl;
   cout<<*(p)<<endl;
   
   // array ko ek pointer se assign kara then uske elements ki value change kr di by doing this

   *p = 123;

   //basic difference in arr and p are:-
   cout<<sizeof(arr)<<endl;
   cout<<sizeof(p)<<endl;
 
    cout<<&arr<<endl;
    cout<<&p<<endl;


  // *p[1] =124;

   cout<<*p<<endl;
   cout<<*(p+1)<<endl;


// array of pointers are:-
 
int *ip[5];
int a = 3,c=21,d=1231;
 ip[0]= &d;
 ip[2] = &a;
 ip[3] = &c;

cout<<ip[0]<<endl;
cout<<ip[2]<<endl;
cout<<ip[3]<<endl;
cout<<*ip[2]<<endl;
    return 0;
}