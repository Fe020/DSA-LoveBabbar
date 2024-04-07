//leetcode 2325 decode the message


#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    // love babbar without using hashmap
    string decodeMessage(string key, string message)
    {
        //creating map

        char start='a';
        char map[300]={0};  //space complexity=O(n)
        //any no. beyond(int)'z' will be accepted
        for(auto ch:key)    //ch is the character not index
        {
            if(ch != ' ' && map[ch]==0) //map[ch] , say ch='a' , means map[(int)ch], eg map[a]=map[97]
            {
                map[ch]=start;
                start++;
            }
        }

        //using map
        string ans;
        for(auto ch:message)    //characters of the string message
        {
            if(ch==' ')
            {
                ans.push_back(' ');
            }
            else
            {
            char decodedChar=map[ch];
            ans.push_back(decodedChar);
            }
        }
        return ans;
    }



    //my approach
    // string decodeMessage(string key, string message)
    // {
    //     vector<char> v;
    //     for (int i = 0; i < key.size(); i++)
    //     {
    //         int count = 1;
    //         if (key[i] == ' ')
    //         {
    //             count = 2;
    //         }
    //         for (int j = 0; j < i; j++)
    //         {
    //             if (key[i] == key[j])
    //                 count++;
    //         }
    //         if (count == 1)
    //             v.push_back(key[i]);
    //     }
    //     v.push_back(' ');
    //     vector<char> alphabet;

    //     char alp = 'a';
    //     for (int i = 1; i <= 26; i++)
    //     {
    //         alphabet.push_back(alp);
    //         alp++;
    //     }
    //     alphabet.push_back(' ');

    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         cout << alphabet[i] << " ";
    //     }
    //     cout << endl;

    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         cout << v[i] << " ";
    //     }
    //     cout << endl;

    //     string final;
    //     for (int i = 0; i < message.size(); i++)
    //     {
    //         for (int j = 0; j < v.size(); j++)
    //         {
    //             if (message[i] == v[j])
    //             {
    //                 final.push_back(alphabet[j]);
    //             }
    //         }
    //     }
    //     return final;
    // }
};

int main()
{
    Solution solution;
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";

    string result = solution.decodeMessage(key, message);

    cout << "Decoded Message: " << result << endl;

    return 0;
}
