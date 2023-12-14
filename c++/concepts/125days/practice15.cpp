//Traping rain water problem 
//brute force
#include<iostream>
using namespace std;

int main (){
int n;
cout<<"enter the number of buildings present :";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"enter the size of building "<<i<<" :";
    cin>>arr[i];
}
int water = 0, Lmax=0, Rmax=0;
for(int i = 1;  i < n-1;  i++){
   for(int j=i;j>=0;j++){
    if(arr[j]>Lmax){
        Lmax=arr[j];
    }
   }
   for(int j = 1;j<n;j++){
    if(arr[j]>Rmax){
        Rmax = arr[j];
    }
   }
water = min(Lmax,Rmax) - arr[i];
}


 cout<<water<<endl;

    return 0;
}