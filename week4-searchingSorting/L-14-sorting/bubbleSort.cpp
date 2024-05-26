//for every index we compare the minimum between v[i] and v[i+1]
//and swap if v[j]>v[j+1] for every j(belongs to i to v.size()) for every i


//according to me sbse bekar algo h kyuki isme proper O(n^2) time complexity lgega
//kyuki ime hrr baar hrr element p ja ke pure array ko iterate krte h

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
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
}