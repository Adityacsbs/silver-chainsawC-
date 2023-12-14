#include<iostream>
using namespace std;

int main (){

 int t;
 cin>>t;
 while(t--){
    int a, b;
    cin>>a>>b;
int q=0;
int count =0;
    for(int i=0;i<b;i++){
    int x,y;
    cin>>x>>y;
   int c = abs(y-q);
    q = y;
    count = count + c;
    }
    cout<<count<<endl;
 }




    return 0;
}