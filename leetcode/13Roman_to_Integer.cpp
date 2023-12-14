#include<iostream>
using namespace std;

class solution{
    public:
    int convert(string s){
        int sum = 0;

        for(int i =0;i<s.length();i++){
            char c = s[i];

            if(c == 'I'){
                sum += 1;
            }else if( c =='V'){
                sum += 5;
                 }else if( c =='X'){
                sum +=10 ;
                            }else if( c =='L'){
                sum += 50;
                            }else if( c =='C'){
                sum += 100;
                            }else if( c =='D'){
                sum += 500 ;
                            }else if( c =='M'){
                sum += 1000;
                            }
        }

        return sum;

    }
};

int main (){
    solution sol;
    string a ="MCMXCIV";

    int q = sol.convert(a);

    cout<<q<<endl;

    return 0;
}