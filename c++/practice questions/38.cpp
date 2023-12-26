#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int max(int arr[],int size){
    int max = INT8_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;

}

int min(int arr1[],int size){
    int min = INT16_MAX;
    for(int i=0;i<size;i++){
        if(arr1[i]<min){
            min=arr1[i];
        }
    }
    return min;
}
int sum(int arr[],int size){
    int sum =0;
    for(int i=0;i<size;i++){
        sum = sum +arr[i];
    }
    return sum;
}

bool search(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}
void reverse(int arr[],int size){
   int start =0;
   int end = size-1;

   while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }

  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
    }
    


int main (){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"max:- "<<max(arr,n)<<endl;

    cout<<"min:- "<<min(arr,n)<<endl;

    cout<<endl;

    cout<<"sum is :- "<<sum(arr,n)<<endl;

    cout<<"enter the key :-"<<endl;
    int key;
    cin>>key;

    bool found = search(arr,n,key);
   if(found){
    cout<<"key found in array."<<endl;
   }else{
    cout<<"key not found. "<<endl;
   }

   reverse(arr,n);


    return 0;
}