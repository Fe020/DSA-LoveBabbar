//pivot- largest element in the rotated sorted array

#include<iostream>
using namespace std;

int pivot(int arr[],int n)
{
    int s=0; int e=n-1; int mid;
    if(arr[s]<arr[e])
    {
        return e;
    }
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]>arr[mid+1])
        {
            // cout<<"A";
            return mid;
        }
        else if(arr[mid-1]<arr[mid])
        {
            if(arr[0]>arr[mid])        //agar B me h to left m jao
            {
                // cout<<"B";
                e=mid-1;
            }
            else        //ni to right m jao
            {
                // cout<<"C";
                s=mid+1;
            }
        }
        else
        {
            // cout<<"D";
            return mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[9]={91,94,103,7,10,16,50,67,89};
    int size=9;
    int ans=pivot(arr,size);
    cout<<endl;
    cout<<"pivot element is: "<<arr[ans]<<" and is present at Index: "<<ans;
}