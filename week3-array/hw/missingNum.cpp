#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missingNum(vector<int> &v)
{
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()+1;i++)
    {
        if(i!=v[i])
        {    
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> v={3,5,4,1,2,7,8,6,9};
    cout<<missingNum(v);
}