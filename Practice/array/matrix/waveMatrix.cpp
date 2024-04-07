//wave form of a matrix

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void eC(vector<vector<int> >& matrix)
{
    for(int i=0;i<matrix[0].size();i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<matrix.size();j++)
            {
                cout<<matrix[j][i]<<" ";
            }
        }
        else
        {
            for(int j=0;j<matrix.size();j++)
            {
                cout<<matrix[matrix.size()-1-j][i]<<" ";
            }
        }
    }
}

int main() {
    vector<vector<int> > matrix={{0,1,2,3},{1,3,5,7},{2,5,8,11}};
    /*
    0 1 2 3
    1 3 5 7
    2 5 8 11
    */
    eC(matrix);
    return 0;
}