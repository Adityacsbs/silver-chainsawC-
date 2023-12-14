#include<iostream>

using namespace std;
struct student{
    int roll_no;
    char name[25];
    char dept[10];
    char address[50];
};
int main (){
    struct student a;
    cin>>a.roll_no;
    cin>>a.name;
    cin>> a.dept;
    cin>>a.address;

     struct student b;
    cin>>b.roll_no;
    cin>>b.name;
    cin>> b.dept;
    cin>>b.address;

    cout<<a.roll_no<<"  "<<a.name<<"  "<<a.dept<<"  "<<a.address<<endl;
    cout<<b.roll_no<<"  "<<b.name<<"  "<<b.dept<<"  "<<b.address<<endl;


    return 0;
}