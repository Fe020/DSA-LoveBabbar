#include <iostream>
#include <string>

int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

std::string removeDuplicates(std::string s) {
    int i = 0;
    int e = s.size();
    while (i < e) {
        if (s[i] == s[i + 1]) {
            s.erase(i, 2);
            e = e - 2;
            i = maximum(0, i - 2);
        } else
            i++;
    }
    return s;
}

int main() {
    std::string inputString;

    // Get input for the string
    std::cout << "Enter the string: ";
    std::getline(std::cin, inputString);

    // Call the function and display the result
    std::string result = removeDuplicates(inputString);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
