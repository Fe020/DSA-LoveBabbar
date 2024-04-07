#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> ans(int a, vector<int>& v)  //&v so that v will be updated directly
{
    if(a==0)
        return v;
    v.push_back(a%10);
    a=a/10;
    return ans(a,v);
}
int main()
{
    int a=41250;
    vector<int> v;
    v = ans(a,v);
    
    // Reverse the vector
    reverse(v.begin(), v.end());
    
    for(int num:v)
    {
        cout<<num<<endl;
    }
}
