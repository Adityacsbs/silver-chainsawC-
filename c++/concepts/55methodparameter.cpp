#include<iostream>

using namespace std;

 class student {
    public:
int name(string stdname);
int id(int stdid);
 };
 int student::name(string stdname){
    return stdname;
 }
 int student::id(int stdid){
    return stdid;
 }
int main (){
    student obj1;
    cout<<student.name("aadityaraj")<<endl;
    cout<<obj1.id(1);

    return 0;
}