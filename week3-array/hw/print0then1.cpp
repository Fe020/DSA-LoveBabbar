//for an array containing only 0 and 1 write 0 first then 1

#include<iostream>
using namespace std;

int count(int arr[],int size,int target)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
            count++;
    }
    return count;
}

int main()
{
    int a[5]={1,1,0,1,1};
    for(int i=0;i<count(a,5,0);i++)
    {
        cout<<"0 ";
    }
    for(int i=count(a,5,0);i<5;i++)
    {
        cout<<"1 ";
    }
    return 0;
}
