#include<iostream>
using namespace std;

void sum(int arr[],int n){
cout<<"address of 1st element of array:-"<<arr<<endl;
    int total=0;
    

    for(int i=1;i<=n;i++){
       cout<<"enter marks of  subject :"<<i<<endl;
       cin>>arr[i];
        total+=arr[i];
    }
    cout<<total<<endl;
}



int main (){

    int marks[100];
    cout<<"address of 1st element of array:-"<<marks<<endl;
    cout<<"how many subject you have : ";
    int sub;
    cin>>sub;
    sum(marks,sub);

 
    return 0;
}