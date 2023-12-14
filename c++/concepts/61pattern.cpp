#include<iostream>

using namespace std;
int main (){
    int a;int count=0;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(j<=i){

            count++;
            cout<<count<<" ";
            }
            else{

            cout<<"";
            }
        }
        cout<<endl;
    }

    return 0;
}