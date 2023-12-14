#include<iostream>

using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
    int a = s.length();

    for(int i = 1; i<=a/2;i++){
        if(a%i==0){
            string empty ="";
            int repeatation = a/i;

            for(int j=0; j<repeatation;j++){
                empty += s.substr(0, i);
            }

            if(s==empty){
                return true;
            }
        }
    }
    return false;
        
    }
};

int main (){

    Solution sol;

   int a = sol.repeatedSubstringPattern("abab");

if(a==1){
    cout<<"true"<<endl;
}else{
    cout<<"false";
}
    return 0;
}