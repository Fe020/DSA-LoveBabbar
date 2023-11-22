//1 index based sorting in 2d matrix using cuatom comperator
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


bool myComp(vector<int> &a, vector<int> &b)
{
    return b[1] > a[1];
}



int main()
{
    vector<vector<int>> v = {{0, 2}, {0, 5}, {5, -1}, {1, 1}};
    sort(v.begin(),v.end(),myComp);

    for (const auto& i : v) {
        for (const auto& j : i) {
            cout << j << " ";
        }
        cout <<endl;
    }
}