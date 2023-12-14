#include<iostream>
using namespace std;

class pattern {
    public:

    void pattern1(int row,int column){
        for(int i=1;i<=column;i++){
            for(int j=1;j<=row;j++){
                cout<<"*";
            }
            cout<<""<<endl;
        }
    }   
};
int main(){
    pattern obj;
    obj.pattern1(5,5);
   cout<<""<<endl;
   obj.pattern1(32,43);
    return 0;
}