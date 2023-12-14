#include<iostream>
using namespace std;

class pattern{
    public:
    
    pattern1(int row){

        for(int i=1;i<=row;i++){
            for(int j=1;j<=row+1-i;j++){
                cout<<j<<" ";
            }
        cout<<endl;
        }
        
    }


};
int main (){

    int row, column;
    cout<<"enter the row :-"<<endl;
    cin>>row;
   // cout<<"enter the column number :-"<<endl;
    //cin>>column;
    pattern obj;
    obj.pattern1(row);

    return 0;
}