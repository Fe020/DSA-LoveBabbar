//2d array is actually a 1d array in which we assign virtual wors and columns.
//for a 2d array of row=i,column=j... w=its location in 1d array will be: 
// 2D-to-1D::: a[i][j]= (col*i)+j 

#include<iostream>
using namespace std;


//printing 2d array:
void print2dRowArray(int a[][4], int row, int col)
{
    cout<<"elements of the 2d array are: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        cout<<endl;
    }
}
void print2dColumnArray(int a[][4], int row, int col)
{
    cout<<"elements of the 2d array are: "<<endl;
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
        cout<<endl;
    }
}

    
int main()
{
    // int row=3;
    // int column=4;
    int arr[3][4]={{0,1,2,3},{4,5,6,7},{8,9,0,1}};
    print2dRowArray(arr,3,4);
    print2dColumnArray(arr,3,4);
}