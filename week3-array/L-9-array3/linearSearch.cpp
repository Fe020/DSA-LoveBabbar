//linear search in 2d array

#include<iostream>
using namespace std;

//print
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

//search
void LinearSearch(int a[][4],int row,int target)
{
    int flag=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]==target)
            {
                flag=1;
                cout<<target <<" is present at position: ("<<i<<","<<j<<")"<<endl;
            }
        }
    }
    
    if(flag==0)
        cout<<target <<" is not there in the given 2D array"<<endl;
}
int main()
{
    int arr[3][4]={{10,20,30,40},{50,60,70,80},{75,85,35,25}};
    LinearSearch(arr,3,25);
    cout<<endl;
    print2dArray(arr,3);
    return 0;
}