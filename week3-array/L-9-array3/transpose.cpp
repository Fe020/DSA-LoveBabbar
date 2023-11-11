#include<iostream>
using namespace std;

void print2dArray(int a[4][4])
{
    cout<<"elements of the 2d array are: "<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        cout<<endl;
    }
}

void transpose(int a[4][4])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
    print2dArray(a);
}


int main()
{
    int arr[4][4]={{10,20,30,40},{50,60,70,80},{75,95,35,25},{50,55,10,15}};
    print2dArray(arr);
    cout<<"<<---TRANSPOSE--->>"<<endl;
    transpose(arr);
}