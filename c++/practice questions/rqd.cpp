#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);  // read input including spaces

    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == ' ' || i == str.length()) {  // found end of word
            string word = str.substr(start, i - start);
            cout   << word.length() <<" ";
            start = i + 1;  // start next word
        }
    }
    return 0;
}
