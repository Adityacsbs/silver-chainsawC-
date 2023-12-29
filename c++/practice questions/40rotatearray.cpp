#include <iostream>
#include <vector>
#include <algorithm>

// Custom comparator to compare strings based on their sorted characters
bool compareStrings(const std::string& str1, const std::string& str2) {
    // Sort the characters of each string and compare
    return std::is_permutation(str1.begin(), str1.end(), str2.begin(), str2.end());
}

int main() {
    std::vector<std::string> stringArray = {"banana", "orange", "kiwi", "apple", "grape"};

    // Sorting the array of strings with characters sorted within each string
    std::sort(stringArray.begin(), stringArray.end(), compareStrings);

    // Display the sorted array of strings
    for (const std::string& str : stringArray) {
        std::cout << str << " ";
    }

    return 0;
}
