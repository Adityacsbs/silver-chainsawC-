#include<iostream>
#include<cmath>

using namespace std;

int main()
{ 
    int a,b,c;
    cout<<"enter the number for comparision :-"<<endl;
    cin>>a>>b>>c;

    cout<<max(a,b)<<endl;
     cout<<max(a,max(b,c))<<endl;
    
    cout<<min(34,23);


    return 0 ;
}