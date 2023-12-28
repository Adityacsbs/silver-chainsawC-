#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

vector<int>findintersection(vector<int>& arr1, int n, std::vector<int>& arr2, int m){

    vector<int> ans;
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

    int i=0,j=0;

    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }else if(arr1[i]>arr2[j]){
            ++j;
        }else{
            ++i;
        }
    }
return ans;

}

int main (){

    int n,m;
    cout<<"enter the size af arr1"<<endl;
    cin>>n;
    cout<<endl;
    cout<<"enter the size af arr2"<<endl;
    cin>>m;

    vector<int> arr1(n);
    vector<int> arr2(m);
cout<<"enter elements of arr1:-"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"enter elements of arr2:-"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

  vector<int>result =  findintersection(arr1,n,arr2,m);
   cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    

    return 0;
}