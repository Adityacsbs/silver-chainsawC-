#include <iostream>
using namespace std;
int main() {
    int  h , mid,n,key , i , j , k;
    int l=0;
    h = n-1;
    cout<<"iput lena hai n"<<endl;
    cin>>n;

    int arr[n];
    cout<<"iput lena hai key"<<endl;
    cin>>key;
    
   /* for(i=0;i<=n;i++)
    {
        cout<<"iput lena "<<endl;
        cin>>arr[i];
    }*/
    
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key==arr[mid])
        cout<<arr[mid];
        else if(key<arr[mid])
        {
          h=mid-1;  
        }
        else{
            l=mid+1;
        }
        cout<<"key not found";
    }
    
    
   
    return 0;
}