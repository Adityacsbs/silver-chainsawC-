// Write a C++ program to display the current date and time. 
#include<iostream>
#include<cmath>
#include<ctime>

using namespace std;
int main (){

    time_t t = time(NULL);
    tm* tPtr =localtime(&t);

    cout<<"\n\n Display the current date and time :\n";

    cout<<"seconds =" <<(tPtr->tm_sec) <<endl;
    cout<<"minute = " <<(tPtr->tm_min) <<endl;
    cout<<"hour = "   <<(tPtr->tm_hour) <<endl;
    cout<<"day = " <<(tPtr->tm_mday) <<endl;
    cout<<"month = "<<(tPtr->tm_mon)+1<<endl;
    cout<<"year = "<<(tPtr->tm_year)+1900 <<endl;
    cout<<"week day = "<<(tPtr->tm_wday) <<endl;
    cout<<"day of year = "<<(tPtr->tm_yday) <<endl;
    cout<<"daylight = "<<(tPtr->tm_isdst) << endl;

    cout<< endl;
    cout<< endl;


    cout<<"Current time : "<<(tPtr->tm_hour)<<":"<<(tPtr->tm_min)<<":"<<(tPtr->tm_sec)<<endl;
    cout<<"current date : "<<(tPtr->tm_mday)<<"/"<<(tPtr->tm_mon)+1<<"/"<<(tPtr->tm_year)+1900<<endl;


    return 0;
}