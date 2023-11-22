// o(n2) -brute force

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// class Solution {
// public:
//     int findPairs(vector<int>& nums, int k) {
//         sort(nums.begin(), nums.end());
//         int count = 0;
//         for (int i = 1; i < nums.size(); i++) {
//             int s = 0;
//             while (s < i) {
//                 if (nums[i] - nums[s] == k) {
//                     if (nums[i] == nums[i - 1] && i > 1) {
//                         if (k != 0 || (k == 0 && nums[i - 2] == nums[i])) {
//                             i++;
//                         } else {
//                             count++;
//                             break;
//                         }
//                     } else {
//                         count++;
//                         break;
//                     }
//                 } else if (nums[i] - nums[s] > k) {
//                     s++;
//                 } else {
//                     break;
//                 }
//             }
//         }
//         return count;
//     }
// };

// int main() {
//     Solution solution;
//     vector<int> nums = {1, 2, 4, 4, 3, 3, 0, 9, 2, 3};
//     int k = 3;
//     int result = solution.findPairs(nums, k);
//     cout << "Result: " << result << endl;

//     return 0;
// }
