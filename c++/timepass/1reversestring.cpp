#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
//The built-in reverse function reverse() in 
//C++ directly reverses a string.
// Given that both bidirectional begin and end iterators are passed as arguments.
int main(){
    int count =0;
  
  string str,m ;
  cin>>str;
  reverse(str.begin(),str.end());
       cout<<str<<endl;

    return 0;
}

//2 apporch:- reverse a integer
class Solution {
public:
    int reverse(int x) {
        string str = to_string(x);
        string rev = string(str.rbegin(),str.rend());
        int d =stoi(rev);
        if(x<0){
            d=d*(-1);
        }
        return d;
    }
};