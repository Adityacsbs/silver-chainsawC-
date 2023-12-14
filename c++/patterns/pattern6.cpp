#include<iostream>
using namespace std;

class pyramid{
public:

void ad(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
};

int main (){
pyramid p;
p.ad();
    return 0;
}