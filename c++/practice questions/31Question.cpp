#include<iostream>

using namespace std;
struct rectangle
{
    int length;
    int breadth;
};


int main(){

struct rectangle a;

cin>>a.length;
cin>>a.breadth;

cout<<"lenght of rectangle is - "<<a.length<<"  breadth of a rectangle is -"<<a.breadth<<endl;
int c=a.breadth*a.length;
cout<<"area of rectangle is -:"<<c<<endl;
cout<<a.length*a.breadth <<endl;

}