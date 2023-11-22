//sort an array in decsending order using custom comperator
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool myComp(int &a,int &b)
{
    return a>b;
}

int main()
{
    vector<int> v={1,3,4,5,6,7,2};
    sort(v.begin(),v.end(),myComp);
    for(auto i: v)
    {
        cout<<i;
    }

}