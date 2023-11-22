#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={0,3,2,5,1,4};
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i;j>-1;j--)
        {
            if(v[j]>v[i])
            swap(v[j],v[i]);
        }
        for(int m=0;m<n;m++)
        {
            cout<<v[m];
        }
        cout<<endl;
    }
}