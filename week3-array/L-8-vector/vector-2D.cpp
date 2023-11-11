#include<iostream>
#include<vector>
using namespace std;


int main()
{
    //1D vector
    vector<int>v={3,5,6,7};
    cout<<"printing 1d vector: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    //2D vector
    vector<vector<int> >vd={{1,2,3,4},{4,5,6,7},{7,8,9,0}};
    cout<<"printing 2d vector: "<<endl;

    for(int i=0;i<3;i++)            //j.size()=row size=3
    {
        for(int j=0;j<4;j++)        //j[0].size()=column size=4
        {
            cout<<vd.at(i).at(j)<<" ";
        }
        cout<<endl;
    }
}