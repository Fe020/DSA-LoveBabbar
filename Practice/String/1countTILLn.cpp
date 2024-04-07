#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countDigitOne(int n) {
        vector<char> v;
        for (int i = 0; i <= n; i++) {
            v.push_back(i);
        }
        int count = 0;
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
            if (v[i] == 1)
                count++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    int result = sol.countDigitOne(15);
    cout << "\nNumber of occurrences of digit 1: " << result << endl;
    return 0;
}
