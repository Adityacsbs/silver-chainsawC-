#include<iostream>

using namespace std;
int main (){
     char operend;
     float division;
    float  a,b,addition,substraction,multiplication;
    //cout<<"choose shortcut "<<endl<<"for addition = a"<<endl<<"for substraction = s"<<endl<<"for multiplication = m"<<endl<<"for division = d"<<endl;
    
    cout<<"enter a number a:-"<<endl;
    cin>>a;
    cout<<"enter operend "<<endl;
    cin>>operend;
    cout<<"enter a number b:-"<<endl;
    cin>>b;

    if(operend=='*'){     
        cout<<" \n Multiplication of two numbers is :- ";
        cout<<a*b<<endl;
    }
    else if(operend=='+'){     
        cout<<" \n Addition of two numbers is :- ";
        cout<<a+b<<endl;
    }
    else if(operend=='-'){     
        cout<<" \n Substraction of two numbers is :- ";
        cout<<a-b<<endl;
    }
  else if(operend=='/'){  
        float k = a/b;   
        cout<<" \n Division of two numbers is :- ";
        cout<<k<<endl;
    }
    else {
        cout<<"you have choosen wrong operend"<<endl;
    }

    return 0;
}