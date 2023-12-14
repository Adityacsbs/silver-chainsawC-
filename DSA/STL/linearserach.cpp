#include<iostream>

using namespace std;
//this is simple linear search fuction

template<typename T>//this is generic linear search fuction

int search(T arr[],int n,T key){//we have to replace int arr = T arr and int key = T key

    for(int i=0; i<n;i++){

        if(arr[i]==key){
            return i;
        }
    }
    return n;
}

int main(){
    int n;
    cout<<"enter the number of array are present "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"enter the number for search"<<endl;
    cin>>key;
    
    cout<<search(a,n,key)<<end;

    float b[]={1.2,1.4,2.4,3.1,4.4,12.4,45.3};
    float my = 3.1;

    cout<<search(b,7,my)<<endl;
return 0;
}