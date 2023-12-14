#include<iostream>
using namespace std;

void modify(int arr[]){
    arr[2]=123;

}

void sum(int *,int );
int main (){

    int ar[100]; 
    int sub;
    cin>>sub;
    sum(ar,sub);
    int array[]={12,24,45,65};
    cout<<"before change : "<<array[2]<<endl;
    modify(array);
    cout<<"after change : "<<array[2];
    return 0;
}

void sum(int *arr,int n){
    int total=0;
   for(int i=1;i<=n;i++){
       cout<<"enter marks of  subject :"<<i<<endl;
       cin>>arr[i];
        total+=arr[i];
    }
    cout<<total<<endl;
}