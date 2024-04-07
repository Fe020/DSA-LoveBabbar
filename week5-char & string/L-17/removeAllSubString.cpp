#include <iostream>
#include <string>

class Solution {
public:
    std::string removeOccurrences(std::string s, std::string part) {
        std::string temp = "";
        // int i = 0;
        int e1 = s.size();
        int e2 = part.size();
        int n = 1;

        for (int i = 0; i < e2; i++) {
            temp.push_back(s[i]);
        }

        for (int i = e2; i < e1; i++) {
            temp.push_back(s[i]);
            int count = 0;

            for (int j = 0; j < e2; j++) {
                if (temp[i - (n * e2) + j + 1] == part[j]) {
                    count++;
                }
            }

            if (count == e2) {
                for (int a = 0; a < count; a++) {
                    temp.pop_back();
                }
                n++;
            }
        }
        
        // Check if the result is empty and return an empty string
        return (temp.empty()) ? "" : temp;
    }
};

int main() {
    Solution solution;

    std::string inputString, inputPart;

    // Get input for the main string
    std::cout << "Enter the main string: ";
    std::getline(std::cin, inputString);

    // Get input for the part string
    std::cout << "Enter the part string: ";
    std::getline(std::cin, inputPart);

    // Call the function and display the result
    std::string result = solution.removeOccurrences(inputString, inputPart);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
