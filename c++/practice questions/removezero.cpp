#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Example vector of strings
    std::vector<std::string> stringVector = {"111", "111", "", "111", "111", "11"};

    // Remove all occurrences of '0' within each string
    for (auto& str : stringVector) {
        str.erase(std::remove(str.begin(), str.end(), '0'), str.end());
    }

    // Remove empty strings
    stringVector.erase(std::remove(stringVector.begin(), stringVector.end(), ""), stringVector.end());

    // Print the result
    for (const auto& str : stringVector) {
        std::cout << str << " ";
    }

    return 0;
}
