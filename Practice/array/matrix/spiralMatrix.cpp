#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void sM(vector<vector<int> >& matrix)
{
    int top=0;
    int right=matrix[0].size()-1;
    int bottom=matrix.size()-1;
    int left=0;
    
    int r=matrix.size();
    int c=matrix[0].size();

    while(left<=right && top<=bottom)
    {
        //trav top
        for(int i=left;i<=right;i++)
        {
            cout<<matrix[top][i]<<" ";
        }
        top++;
        
        //trav rigth
        for(int i=top;i<=bottom;i++)
        {
            cout<<matrix[i][right]<<" ";
        }
        right--;
        
        //trav bottom
        if(top<bottom)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<matrix[bottom][i]<<" ";
            }
            bottom--;
        }
        
        //trav left
        if(top<bottom)
        for(int i=bottom;i>=top;i--)
        {
            cout<<matrix[i][left]<<" ";
        }
        left++;
    }
}


int main() {
    vector<vector<int> > matrix={{0,1,2,3},{1,3,5,7},{2,5,8,11},{3,7,11,15}};
    /*
    0 1 2  3
    1 3 5  7
    2 5 8  11
    3 7 11 15
    */
    sM(matrix);
    return 0;
}