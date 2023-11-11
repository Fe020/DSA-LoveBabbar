//shift array elements by 1 times

#include<iostream>
using namespace std;

//right shift
// void shiftArrayBy1(int arr[],int size)
// {
//     int temp=arr[4];
//     for(int i=size-1;i>-1;i--)
//     {
//         arr[i+1]=arr[i];
//     }
//     arr[0]=temp;
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i];
//     }
// }


//left shift
void shiftArrayBy1(int arr[],int size)
{
    int temp=arr[0];
    for(int i=0;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int a[5]={1,2,3,4,5};
    shiftArrayBy1(a,5);
    return 0;
}