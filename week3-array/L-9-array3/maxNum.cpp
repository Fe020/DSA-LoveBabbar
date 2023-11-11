#include<iostream>
using namespace std;

void printMax(int a[][4],int row)
{
    int max=INT_MIN;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]>max)
            max=a[i][j];
        }
    }
    cout<<"largest number of the 2D array: "<<max<<endl;
}

void print2dArray(int a[][4], int row)
{
    cout<<"elements of the 2d array are: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        cout<<endl;
    }
}


int main()
{
    int arr[3][4]={{10,20,30,40},{50,60,70,80},{75,95,35,25}};
    print2dArray(arr,3);
    printMax(arr,3);
}