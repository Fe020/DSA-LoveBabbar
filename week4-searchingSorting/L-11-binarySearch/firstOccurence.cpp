//find first occurence of the target element from a sorted array


//concept- agra element mila to usko store krwao, aur left m jao(end=mid-1)

#include<iostream>
using namespace std;


int binarySearch(int arr[],int size,int target)
{
    int start=0;
    int end=size-1;
    int mid;
    int final=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;    //used this instead of s+e/2 to avoid integer overflow of its range
        if(arr[mid]<target)
        {
            start=mid+1;
        }
        else if(arr[mid]>target)
        {
            end=mid-1;
        }
        else if(arr[mid]==target)
        {
            final=mid;
            //first occurence
            end=mid-1;

            // last occurence
            // start=mid+1;

            //total occurence
            //last-first+
        }
    }
    return final;
}


int main()
{
    int arr[10]={10,20,20,30,30,40,70,80,90,100};
    int size=10;
    int target=30;
    int foundAt=binarySearch(arr,size,target);
    cout<<foundAt<<endl;
}