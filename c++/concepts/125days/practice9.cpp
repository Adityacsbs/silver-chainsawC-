#include<iostream>

using namespace std;

// yeah jo fuction hai woh pass by value wala hai isme orignal value change nahi hogi
//bs function mai jo change function ke liye uske bhar value have nothing changed
void swap1(int x, int y){   
int swap = x;
 x = y;
 y = swap;

 cout<<x<<" "<<y<<endl;

}

//pass by reference :- isme fuction ke andar jo value change hogi wahi orignal value mai bhi change
//hogi because both are pointing the same memeory location or same point
void swap2(int &a, int &b){
    int swap = a;
 a = b;
 b = swap;

 cout<<a<<" "<<b<<endl;

}  
//pass by pointer 
//isme apan address dete hai or pointer us address se value utha kr use krta hai
 void swap3(int *a,int *b){
    int swap ;
    swap = *a;
    *a = *b;
    *b = swap;
    cout<<*a<<" "<<*b<<endl;
 }

int main (){

    int a,b;
    cin>>a>>b;

    swap1(a,b);//pass by value 
    cout<<"original are a = "<<a<<", b = "<<b<<endl;

    swap2(a,b);//pass by reference 
    cout<<"original alues are also changed a = : "<<a<<", b = "<<b<<endl;

    swap3(&a,&b);//pass by pointer
    cout<<"original alues are also changed a = : "<<a<<", b = "<<b<<endl;

    return 0;
}