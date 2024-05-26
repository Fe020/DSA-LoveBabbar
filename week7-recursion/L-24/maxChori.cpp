//max chori in non-adjecent ghars

#include <iostream>
#include <vector>
using namespace std;

int canRob(vector<int>& nums, int index, int j) {
    if(index > j) {
        return 0;
    }
    int maxi = 0;
    for(int i = index; i <= j; i++) {
        // Robbery at the current house
        int option1 = nums[i] + canRob(nums, i + 2, j);
        // Skipping the current house
        int option2 = canRob(nums, i + 1, j);
        int maxx = max(option1, option2);
        maxi = max(maxx, maxi);
    }
    return maxi;
}

int rob(vector<int>& nums) {
    int ind = 0;
    int j = nums.size() - 1;
    int ans = canRob(nums, ind, j);
    return ans;
}

int main() {
    // Example usage:
    vector<int> nums = {2, 7, 9, 3, 1};
    cout << "Maximum amount that can be robbed: " << rob(nums) << endl;
    return 0;
}
