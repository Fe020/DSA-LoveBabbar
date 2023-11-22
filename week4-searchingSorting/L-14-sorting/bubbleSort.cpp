#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
    int temp= y;
    y= x;
    x=temp;
}
int main()
{
    int arr[5]={5,1,4,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}