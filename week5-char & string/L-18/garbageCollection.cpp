//leetcode 2391

#include <iostream>
#include <vector>
#include<cstring>

using namespace std;

int garbageCollection(vector<string>& garbage, vector<int>& travel) {
    int countG = 0, countP = 0, countM = 0;
    int posG = 0, posP = 0, posM = 0;

    for (int i = 0; i < garbage.size(); i++) {
        for (int j = 0; j < garbage[i].size(); j++) {
            if (garbage[i][j] == 'G') {
                countG++;
                posG = i;
            } else if (garbage[i][j] == 'P') {
                countP++;
                posP = i;
            } else if (garbage[i][j] == 'M') {
                countM++;
                posM = i;
            }
        }
    }

    int sumG = 0, sumP = 0, sumM = 0;
    for (int i = 0; i < posG; i++) {
        sumG += travel[i];
    }
    for (int i = 0; i < posP; i++) {
        sumP += travel[i];
    }
    for (int i = 0; i < posM; i++) {
        sumM += travel[i];
    }

    int ans = countG + sumG + countP + sumP + countM + sumM;
    return ans;
}

int main() {
    vector<string> garbage = {"GGG", "PPP", "MMM"};
    vector<int> travel = {1, 2, 3};

    int result = garbageCollection(garbage, travel);

    cout << "Result: " << result << endl;

    return 0;
}


//i wrote the same code but using another function so that the code length will be reduced but its submission time is much more than the above code(that is my code compressed by chatgpt without using another function)

// class Solution {
// public:
//     int truck(char X,vector<int>& travel,vector<string>& garbage) {
//         int count=0;
//         int pos=0;
//         for(int i=0;i<garbage.size();i++)
//         {
//             for(int j=0;j<garbage[i].size();j++)
//             if(garbage[i][j]==X)
//             {
//                 count++;
//                 pos=i;
//             }
//         }
//         int sum=0;
//         for(int i=0;i<pos;i++)
//         {
//             sum=sum+travel[i];
//         }
//         return count+sum;
//     }

//     int garbageCollection(vector<string>& garbage, vector<int>& travel)
//     {
//         int a= truck('G',travel ,garbage);
//         int b= truck('P',travel ,garbage);
//         int c= truck('M',travel ,garbage);
//         return a+b+c;
//     }
// };