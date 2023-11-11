#include<iostream>
using namespace std;
void pairr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<"(" <<arr[i]<<","<<arr[j]<<")";
        }
    cout<<endl;
    }
}
int main()
{
    int a[3]={10,20,30};
    pairr(a,3);
    return 0;
}