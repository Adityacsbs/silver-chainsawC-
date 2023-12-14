#include<iostream>
#include<fstream>//for file handing operations
#include<sstream>//<sstream> is a part of the C++ Standard Library. It is a header file that provides templates 
//and types that enable interoperation between stream buffers and string objects.
#include<string>



using namespace std;

int main (){
 int a , i=0 ;
 string  text  , old , password1 , password2 , pass , name , password0 , age , user , word0 , word ;
 string  creds[2] , cp[2] ;

cout<<"          Security System       "<<endl;

cout<<"_____________________________"<<endl<<endl;
cout<<"|        1.Register        |"<<endl;
cout<<"|        2.Login           |"<<endl;
cout<<"|        3.Change password |"<<endl<<endl<<endl;

do{
    cout<<endl<<endl;
    cout<<"enter your choice...";
    cin>>a;
    switch(a){
        case 1:{
            cout<<"____________________________________"<<endl<<endl;
            cout<<"______________Register______________"<<endl<<endl;
            cout<<"|___________________________________|"<<endl<<endl;
            cout<<"enter your youser name :-";
            cin>>name;
            cout<<"Please enter the password:-";
            cin>>password0;
            cout<<"enter your age :-";
            cin>>age;


            ofstream of1;
            of1.open("file.txt");
            if(of1.is_open()){
                of1<<name<<"\n";
                of1<<password0;
                cout<<"Registeratation succcesfull"<<endl;

            }
            break;
        }

        case 2:{
            i = 0 ;

            cout<<"_______________________________"<<endl<<endl;
            cout<<"|----------Login---------------"<<endl;
            cout<<"|______________________________|"<<endl<<endl;

            ifstream of2;
            of2.open("file.txt");
            cout<<"please enter the user name:-";
            cin>>user;
            break;
        }
     case 3 :{
           
     }
    }
}
while(a != 3);
 return 0;



}