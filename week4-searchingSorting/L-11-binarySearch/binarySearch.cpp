#include<iostream>
#include<time.h>
using namespace std;

int binarySearch(int arr[],int target,int size)
{
    int start=0;
    int end=size-1;
    int mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]>target)
        {
            end=mid-1;
        }
        else if(arr[mid]<target)
        {
            start=mid+1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    double clk;
    clock_t starttime,endtime;
    int arr[10]={0,10,20,30,40,50,60,70,80,90};
    int size=10;
    int target=80;
    starttime=clock();
    int ans=binarySearch(arr,target,size);
    endtime=clock();
    cout<<ans<<endl;
    clk=double(endtime-starttime)/CLOCKS_PER_SEC;
    cout<<clk<<endl;
}