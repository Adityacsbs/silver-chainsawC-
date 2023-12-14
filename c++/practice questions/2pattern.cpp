#include<iostream>
using namespace std;

class pattern{
public:

void function(int columnn, int row){
    for(int i=1;i<=row;i++){
        if(i==1){
            for(int j=1;j<=columnn;j++){
            cout<<"*";
            }
        }
        
    }
    cout<<""<<endl;
    
    for(int i=2;i<=row-1;i++){
       
        for(int j=1;j<=columnn;j++){
            if(j==1||j==columnn){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<""<<endl;
    }
    for(int i=1;i<=row;i++){
        if(i==row){
            for(int j=1;j<=columnn;j++){
            cout<<"*";
            }
        }
        
    }
    }  

    void function2(int columnn ,int row){
         for(int i=1;i<=row;i++){
            for(int j=1;j<=columnn;j++){
                if(i==1||j==columnn||i==row||j==1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<""<<endl;
         }
    }  
    void inverted_pattern(int m){
        for(int i=m;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<" "<<endl;
        }
    }
};


int main (){

    pattern pattern1;
    pattern1.function(4,6);
    cout<<endl<<"  --------------------------------------------"<<endl;
    pattern1.function2(4,8);
    cout<<endl<<"---------------------------------"<<endl;
    pattern1.inverted_pattern(5);

    return 0;
}