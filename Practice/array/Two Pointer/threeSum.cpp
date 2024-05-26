#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i - 1] && nums[i] != 0)
            continue;
        else {
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                if (nums[j] + nums[k] == -nums[i]) {
                    vector<int> subAns = {nums[i], nums[j], nums[k]};
                    if ((ans.size() >= 1 && subAns != ans[ans.size() - 1]) || ans.empty()) {
                        ans.push_back(subAns);
                    }
                    k--;
                    j++;
                } else if (nums[j] + nums[k] < -nums[i])
                    j++;
                else
                    k--;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);

    cout << "Triplets summing to zero are: " << endl;
    for (auto& triplet : result) {
        cout << "[";
        for (int i = 0; i < 3; i++) {
            cout << triplet[i];
            if (i < 2) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
