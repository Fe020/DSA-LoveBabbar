#include <iostream>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        //bits manupulation

        if((n==1) || (n>0 && ((n)&(n-1))==0))
        {
            return true;
        }
        return false;
    }
};

int main() {
    Solution sol;
    std::cout << sol.isPowerOfTwo(16) << std::endl; // Output: 1 (true)
    std::cout << sol.isPowerOfTwo(5) << std::endl;  // Output: 0 (false)
    return 0;
}
