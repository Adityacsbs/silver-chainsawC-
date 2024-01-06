#include<iostream>

using namespace std;

int binary_search(int array[], int size,int key){
    int start = 0;
    int end = size - 1;

   // int mid = (start + end)/2;
    int mid = start +(end-start)/2;

    while(start<=end){
        if(array[mid]==key){
            return mid;
        }

        if(array[mid]<key){
          start = mid + 1;
        //  mid = (start + end)/2;
         int mid = start +(end-start)/2;
        }
        if(array[mid]>key){
          end = mid - 1;
        //  mid = (start + end)/2;
         int mid = start +(end-start)/2;
        }
       
    }
    return -1;
}

int main (){

    int n ;
    cout<<"enter the size of an array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the array elements:-"<<endl;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<endl;
    }
    int key;
    cout<<"enter key to search:-"<<endl;
    cin>>key;

    int ans = binary_search(arr,n,key);

    cout<<"the ans is "<<ans<<endl;


    return 0;
}