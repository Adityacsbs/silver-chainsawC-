#include<iostream>

using namespace std;

class Solution {
public:
    int lastRemaining(int n) {
        int k;  // Declaration of variable k
        
        if (n <= 10) {
            k = n;  // Assignment of value to k
        }
         else {
            int nearestMultipleOfTen = (n / 10) * 10;
            int difference = n - nearestMultipleOfTen;
            int convertedN = 10 - difference;
            k = convertedN;  // Assignment of value to k
        }

        if (k == 1) return 1;  // Using k instead of n in comparisons
        if (k == 2) return 2;
        if (k == 3) return k - 1;  // Using k instead of n
        if (k > 3 && k % 2 == 0) {
            return k - 2;
        }
        if (k > 3 && k % 2 != 0) {
            return k - 3;
        }
        
        // Add a default return value for cases not covered above
        return -1; // You can choose an appropriate default value here
    }
};


int main (){

    Solution sol;

    cout<<sol.lastRemaining(98);

    return 0;
}