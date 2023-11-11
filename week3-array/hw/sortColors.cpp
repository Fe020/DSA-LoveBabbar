#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void sortColor(vector<int>& v)
{
    sort(v.begin(),v.end());
    for(auto i:v)
    {
        cout<<i<<" ";
    }
}

int main()
{
    vector<int> v={0,1,0,2,1,2};
    sortColor(v);
}