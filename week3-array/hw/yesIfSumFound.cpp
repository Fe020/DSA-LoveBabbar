// given an array, check if sum of 2 of its element is equal o a given 3rd number

#include<iostream>
using namespace std;

bool isTrue(int arr[],int n,int sumToFind)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]+arr[j]==sumToFind)
            {
                return true;
            }   
        }
    }
    return false;
}
int main()
{
    int n=8;
    int arr[n]={1,2,3,4,5,6,20,8};
    // int sumToFind=25;
    bool answer=isTrue(arr,8,29);
    if(answer)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}