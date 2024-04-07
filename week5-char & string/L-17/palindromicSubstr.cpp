#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    
    int countSubstrings(string s) {
        int e=s.size();
        int count=0;
        if((e-1)%2==0)   //even
        {
            int i=e/2;
            int j=(e/2)+1;
            while(i!=0 || j!=e-1)
            {
                if(s[i]==s[j])
                {
                    count++;
                }
                i--;
                e++;
            }
        }
        else    //odd
        {
            int i=(e/2)+1;
            int j=(e/2)+1;
            while(i!=0 || j!=e-1)
            {
                if(s[i]==s[j])
                {
                    count++;
                }
                i--;
                e++;
            }
        }
        return count;
        
        // int i=0;
        // int j=i;
        // while(i<e)
        // {
        //     if(s[j]==s[e])
        //     count++;
        //     j--;
        //     e++;
        // }
    }
};

int main() {
    Solution solution;
    string inputStr = "ababa"; // You can change the input string here
    int result = solution.countSubstrings(inputStr);
    cout << "Number of palindromic substrings: " << result << endl;

    return 0;
}
