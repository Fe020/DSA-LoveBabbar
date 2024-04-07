#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool check(string s, string t, string subSeq, int index) {
        if (subSeq == s)
            return true;
        if (index >= t.size())
            return false;
        return check(s, t, subSeq + t[index], index + 1) || check(s, t, subSeq, index + 1);
    }

    bool isSubsequence(string s, string t) {
        string subSeq;
        cout<<"1. using recursion: "<<endl;;
        return check(s, t, subSeq, 0);

        //or
        cout<<"2. using 2 pointer approach"<<endl;
        int pointer1=0,pointer2=0;
        while(pointer1<s.size() && pointer2<t.size())
        {
            {
                if(s[pointer1]==t[pointer2])
                    pointer1++;
            }
            pointer2++;
        }
        if(pointer1==s.size())
            return true;
        return false;
    }
};

int main() {
    Solution sol;
    string s = "abc";
    string t = "ahbgdc";
    if (sol.isSubsequence(s, t))
        cout << s << " is a subsequence of " << t << endl;
    else
        cout << s << " is not a subsequence of " << t << endl;
    return 0;
}
