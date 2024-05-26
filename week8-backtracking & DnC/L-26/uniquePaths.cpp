// There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.
#include<iostream>
#include <vector>
using namespace std;

void count(vector<vector<int>>& mat, int m, int n, int i, int j, vector<int>& ans) {
    // Base case
    if (i >= m || j >= n) {
        return;
    }
    if (i == m - 1 && j == n - 1) {
        ans.push_back(1);
        return;
    }
    // Working
    while (i < m) {
        mat[i][j] = 1;
        count(mat, m, n, i + 1, j, ans);
        mat[i][j] = 0;
        break;
    }
    while (j < n) {
        mat[i][j] = 1;
        count(mat, m, n, i, j + 1, ans);
        mat[i][j] = 0;
        break;
    }
}

int uniquePaths(int m, int n) {
    vector<vector<int>> mat(m, vector<int>(n, 0));
    int i = 0;
    int j = 0;
    vector<int> ans;
    count(mat, m, n, i, j, ans);
    return ans.size();
}

int main() {
    int m = 3; // Example grid dimensions
    int n = 7;
    int result = uniquePaths(m, n);
    cout<<"number of unique path to reach ("<<n<<","<<m<<") from (0,0 is:"<<result<<endl;
    return 0;
}
