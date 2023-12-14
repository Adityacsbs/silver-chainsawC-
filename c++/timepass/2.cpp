#include<iostream>

using namespace std;

bool palindrome(int x){

    string str = to_string(x);

    string rev = string(str.rbegin(),str.rend());

    if (str ==rev){
        return true;
    }
    else{
        return false;
    }
}

int main (){
    int x;
    cin>>x;
    if (palindrome(x)){
        cout<<x<<" this is palindrome"<<endl;
    }
    else{
        cout<<x<<" this is not a palindrome"<<endl;
    }

    return 0;
}