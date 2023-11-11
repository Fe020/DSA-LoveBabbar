#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix( vector<vector<int> >&matrix,int target)
{
    int row=matrix.size();
    int col=matrix[0].size();
    int n=row*col;
    int s=0;int e=n;int mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        int curRow=mid/col;
        int curCol=mid%col;
        int curNum=matrix[curRow][curCol];
        if(curNum==target)
        {
            return true;
        }
        else if(curNum>target)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int> >matrix={{0,1,2},{3,4,5},{6,7,8},{9,10,11}};
    int target=17;
    if(searchMatrix(matrix,target))
    {
        cout<<target<<" is present in the given 2d array"<<endl;
    }
    else
    cout<<target<<" is not present in the given 2d array"<<endl; 
}   