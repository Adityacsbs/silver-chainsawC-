#include<iostream>

using namespace std;
class Student_data{
    public: 
    int roll_no;
    string name;
    int age ;
};
int main (){
    Student_data myObj;
    myObj.roll_no= 1;
    myObj.name ="adityaraj_singh_chouhan";
   myObj.age = 20;

    Student_data myobj2;
   myobj2.roll_no =2;
    myobj2.name ="AKSHAT_SHARMA";
   myobj2.age = 19;


    cout<<myObj.roll_no<<"  "<<myObj.name<<" "<<myObj.age<<endl;
    cout<<myobj2.roll_no<<"   "<<myobj2.name<<"   "<<myobj2.age<<endl;

    return 0;
}