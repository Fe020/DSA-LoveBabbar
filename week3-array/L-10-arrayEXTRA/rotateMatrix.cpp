#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printMatrix(const vector<vector<int> >&v)
{
    for(auto i: v)
    {
        for(int j: i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void rotateMatrix(vector<vector<int> > v)
{
    vector<vector<int> >ans;
    for(int i=0;i<v.size();i++)     //traverse rows
    {
        for(int j=0;j<i;j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }
    // for(int i=0;i<v.size();i++)
    // {
    //     for(int j=0;j<v[i].size()/2;j++)
    //     {
    //         swap(v[i][j],v[i][2 - j]);
    //     }
    // }

    // or
    
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            reverse(v[i].begin(),v[i].end());
        }
    }
    printMatrix(v);
}


int main()
{
    vector<vector<int> >v=
    {
        {1,2,3},//1=0,0-0,2    2=0,1-1,2    3=0,2-2,2
        {4,5,6},//4=1,0-0,1    5=1,1-1,1    6=1,2-2,1
        {7,8,9} //7=2,0-0,0    8=2,1-1,0    9=2,2-2,0
    };
    rotateMatrix(v);
    // printMatrix(v);   
    // expected output
    // {
    //     {7,4,1},
    //     {8,5,2},
    //     {9,6,3}
    // }
}