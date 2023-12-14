#include<iostream>

using namespace std;
class student{
    public:
    int roll_no;
    void my_method(){
       
        cout<<"adityaraj ka naya method "<<endl;
    }

};
int main (){
    student obj1;
    obj1.my_method();

    return 0;
}
//In the following example, we define a function inside the class, and we name it "myMethod".