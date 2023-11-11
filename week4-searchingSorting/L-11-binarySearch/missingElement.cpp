//in a sorted array of size n-1 from 1 to n an element is missing find that
#include<iostream>
using namespace std;
int missingElement(int arr[],int size)
{
    int s=0;
    int e=size-1;
    int missing=-1;
    int mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]==mid+1)
        {
            s=mid+1;
        }
        else
        {
            missing=mid;
            e=mid-1;
        }
    }
    if(missing==-1)
    {
        missing=size-1;
    }
    return missing+1;
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int size=10;
    int ans= missingElement(arr,size);
    cout<<ans;
}