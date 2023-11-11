#include<iostream>
#include<vector>
using namespace std;

bool even(int n)
{
    return ((n%2==0)?true:false);
}

int uniqueElement(vector<int> &v)
{
    int s=0;
    int e=v.size()-1;
    int mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        // cout<<s<<endl;
        // cout<<e<<endl;
        // cout<<mid<<endl;
        
        if((v[mid]==v[mid-1]) || (v[mid]==v[mid+1]))
        {
            if (v[mid]==v[mid+1])
            {
                // cout<<"a"<<endl;
                if(even(mid))
                {
                    s=mid;
                }
                else e=mid;
            }
            else if(v[mid]==v[mid-1])
            {
                // cout<<"b"<<endl;
                if(even(mid))
                {
                    e=mid;
                }
                else s=mid;
            }
        }
        else
        {
            return v[mid];
        }
    }
    return -1;
}

int main()
{
    vector<int> v={50,1,1,3,3,2,2,5,5,7,7,8,8};
    cout<<uniqueElement(v);
}