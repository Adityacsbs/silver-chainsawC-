#include<iostream>

using namespace std;
int main (){
    int a;
    cin>>a;
    while(a--){
        int b,c;
        cin>>b>>c;
        if(b<c){
            cout<<"first"<<endl;
        }
        else if(b>c){
            cout<<"second"<<endl;

        }
        else{
            cout<<"any"<<endl;
        }
    }

    return 0;
}