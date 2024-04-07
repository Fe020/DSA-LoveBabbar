#include <iostream>
#include <cstring>

using namespace std;

class Solution {
public:
    bool validPalindrome(string s)
    {
        int i = 0;
        int e = s.size() - 1;
        int count=0;
        while (i <= e)
        {
            if (s[i] == s[e])
            {
                cout<<endl;
                i++;
                e--;
            }
            else
            {
                if(s[i+1]==s[e] && s[i]==s[e-1])
                {
                    i=i+1;
                    e=e-1;
                }
                else if (s[i] == s[e - 1])
                {
                    count++;
                    e--;
                }
                else if (s[i + 1] == s[e])
                {
                    count++;
                    i++;
                }
                else
                {
                    return false;
                }
            }
        }
        if(count>1)
            return false;
        else
            return true;
    }
};

int main() {
    Solution sol;
    string test_case = "bhaaluulaah"; // Replace with your test case
    cout << "Test Case: " << test_case << endl;

    bool result = sol.validPalindrome(test_case);
    cout << "Result: " << (result ? "true" : "false") << endl;

    return 0;
}
