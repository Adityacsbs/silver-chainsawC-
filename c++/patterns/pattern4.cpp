#include<iostream>
using namespace std;

class pattern{
    public:
    
    pattern1(int row){

        for(int i=1;i<=row;i++){
            for(int k=1;k<=row-i;k++){
                cout<<" ";
            }

            for(int j=1;j<=row;j++){
                cout<<"*"<<" ";
            }
        cout<<endl;
        }
        
    }
    pattern2(int row){

        for(int i=1;i<=row;i++){
            for(int k=1;k<=row-i;k++){
                cout<<" ";
            }
            
            for(int j=1;j<=i;j++){
                cout<<"*"<<" ";
            }
        cout<<endl;
        }
        
    }
    pattern3(int row){

        for(int i=1;i<=row;i++){
            for(int k=1;k<=i-1;k++){
                cout<<" ";
            }
            
            for(int j=1;j<=row+1-i;j++){
                cout<<"*"<<" ";
            }
        cout<<endl;
        }
        
    }

    pattern4(int row){

        for(int i=1;i<=row;i++){
            for(int k=1;k<=i-1;k++){
                cout<<" ";
            }
            
            for(int j=1;j<=row;j++){
                cout<<"*"<<" ";
            }
        cout<<endl;
        }
        
    }


pattern5(int row){

        for(int i=1;i<=row;i++){
            for(int k=1;k<=row-i;k++){
                cout<<" ";
            }
            
            for(int j=1;j<=i;j++){
                cout<<"*"<<" ";
            }
             for(int k=1;k<=(row-i)*2;k++){
                cout<<" ";
            }
            
            for(int j=1;j<=i;j++){
                cout<<"*"<<" ";
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
    cout<<endl;
    obj.pattern2(row);
   // cout<<endl;
    obj.pattern3(row);
    cout<<endl;
    obj.pattern4(row);
cout<<endl;
    obj.pattern5(row);
    return 0;
}