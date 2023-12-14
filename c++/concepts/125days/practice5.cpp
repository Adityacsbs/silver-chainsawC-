#include<iostream>
using namespace std;

class Solution{
  public:

  void a(){
int t;
cout<<"enter t:"<<endl;
cin>>t;
while(t--){
    int a;
    cout<<"enter a:"<<endl;
    cin>>a;
     if(a==1){
    cout<<1<<endl;
   }
   else{

   int b = a/2;
   cout<<b<<endl;
   }
   if(a==1){
    cout<<"(1)";
   }
   else if(a>=3){
    cout<<"(1,2,3)"<<endl;

   for(int i =4;i<=a;i++){
      cout<<"("<<i<<","<<i+1<<")"<<endl;
      i++;
   }
   }
}

  }  
};


int main (){
    Solution sol;
    sol.a();

    return 0;
}