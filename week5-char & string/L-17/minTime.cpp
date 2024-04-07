#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) 
    {        
        vector<int> h;
        for(int i = 0; i < timePoints.size(); i++)
        {
            h.push_back((60 * stoi(timePoints[i].substr(0, 2))) + stoi(timePoints[i].substr(3, 2)));
        }
        
        sort(h.begin(), h.end());
        
        int minDifference = INT_MAX;
        for(int i = 1; i < h.size(); i++)
        {
            int diff = h[i] - h[i - 1];
            minDifference = min(minDifference, diff);
        }
        
        // Check the difference between the last and the first time point.
        minDifference = min(minDifference, 1440 - (h.back() - h.front()));
        
        return minDifference;
    }
};
