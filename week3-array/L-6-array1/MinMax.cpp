#include<iostream>
#include<limits.h>
using namespace std;
int min(int a[],int size)
{
    int minimum=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(a[i]<minimum)
        {
            minimum=a[i];
        }
        else 
        {
            continue;
        }
    }
    return minimum;
}


int max(int a[],int size)
{
    int maximum=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(a[i]>maximum)
        {
            maximum=a[i];
        }
        else 
        {
            continue;
        }
    }
    return maximum;
}
int main()
{
    int arr[5]={1,3,-4,0,12};
    int n=5;
    cout<<"minimum element of the array is: "<<min(arr,n)<<endl;
    cout<<"maximum element of the array is: "<<max(arr,n)<<endl;
    return 0;
}