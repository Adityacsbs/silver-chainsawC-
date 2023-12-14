//To define a function outside the class definition,
// you have to declare it inside the class and then define it outside of the class. 
//This is done by specifiying the name of the class, followed the scope resolution :: operator,
// followed by the name of the function:
#include<iostream>

using namespace std;
class okk {
    public:
    void method1();
};

void okk::method1(){

     cout<<"abb hum method ka naam deke isko bhar define karege "<<endl;
    cout<<"28/09/2022 -- jab bhi yeah git pr dekhe future me ek baar hasna jarur ki jab kitna darta tha future ko leke or abbb kaha hai :-love you"<<endl;
}
int main (){

    okk obj1;
    obj1.method1();

    return 0;
}
