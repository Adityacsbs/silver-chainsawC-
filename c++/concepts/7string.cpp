#include<iostream>

using namespace std;
int main()
{
   string name;
   string age;
   //this code is for first name only 
    /*
   cout<<"enter your name ";
   cin>>name;
    cout<<"Hello mr./mrs "<<name;
    // in this our full name is not printed for printing full name of we have to use this code
*/
    cout<<"enter your name ";
    getline(cin,name);
    cout<<"enter your age "<<endl;
    getline(cin,age);
    cout<<"welcome mr. "<<name<<age;

    return 0;

     
} 