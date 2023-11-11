//in nearly soprted array a number can be at a position (i-1),(i) or (i+1)
//i is its position if the array was sorted
#include<iostream>
#include<vector>
using namespace std;

int BSinNearlySorted(vector<int> a, int k)
{
    // Your code here
    int s=0;
    int e=a.size()-1;
    int mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(a[mid]==k)
        {
            return mid;
        }

        else if(a[mid]<k)
        {
            if(a[mid-1]==k)
            {
                return mid-1;
            }
            s=mid+1;
        }

        else
        {
            if(a[mid+1]==k)
            {
                return mid+1;
            }
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    vector<int> a={20,10,30,50,40,60,80,70};
    int k=80;
    cout<<BSinNearlySorted(a,k)<<endl;
}