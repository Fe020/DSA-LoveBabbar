#include<iostream>
#include<vector>

using namespace std;

int missingNum(vector<int>v)
{
    int total=0;
    int sum=0;
    int a[v.size()];
    for(int i=0;i<v.size()+1;i++)
    {
        sum=sum+i;
    }
    for(int i=0;i<v.size();i++)
    {
        total=total+v[i];
    }
    return sum-total;
}

int main()
{
    vector<int>v={0,1,3,5,4,7,2};
    int number=missingNum(v);
    cout<<" missing number is : "<<number<<endl;
}