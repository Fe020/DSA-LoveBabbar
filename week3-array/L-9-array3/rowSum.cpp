#include<iostream>
using namespace std;


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


void rowSum(int a[][4],int row)
{
    
    for(int i=0;i<row;i++)
    {
        int sum =0;
        for(int j=0;j<4;j++)
        {
            sum=sum+a[i][j];
        }
        cout<<"sum of elements of row "<<i<<" = "<<sum<<endl;
        cout<<endl;
    }

}
void colSum(int a[][4],int row)
{
    for(int i=0;i<4;i++)
    {
        int sum =0;
        for(int j=0;j<row;j++)
        {
            sum=sum+a[j][i];
        }
        cout<<"sum of elements of column (left to right)"<<" = "<<sum<<endl;
        cout<<endl;        
    }
    
}

int main()
{
    int arr[3][4]={{10,20,30,40},{50,60,70,80},{75,95,35,25}};
    print2dArray(arr,3);
    rowSum(arr,3);
    print2dArray(arr,3);
    colSum(arr,3);
    return 0;
}