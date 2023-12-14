#include<iostream>

using namespace std;

class adityaraj{
public:
/// @brief 
string name;
int roll;
string branch;
void methodin(){
    cout<<"yeah inside method ka output hai "<<endl;
}
void methodout();
};
void adityaraj::methodout(){
cout<<"this output is for outside method of class "<<endl;
}
int main (){

    adityaraj obj1;
    obj1.name ="adityaraj";
    obj1.roll=01;
    obj1.branch="CSBS";
    cout<<obj1.name<<" "<<obj1.roll<<" "<<obj1.branch<<endl;
    obj1.methodin();
    obj1.methodout();

    return 0;
}