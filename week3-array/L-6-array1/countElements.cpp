#include<iostream>
using namespace std;
void count(int a[],int size,int k)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==k)
        count++;
    }
    cout<<"total no. of "<<k<<" in the array: "<<count<<endl;

}
int main()
{
    int arr[10]={1,0,1,0,1,1,1,0,1,1};
    count(arr,10,1);
    count(arr,10,0);
    return 0;
}