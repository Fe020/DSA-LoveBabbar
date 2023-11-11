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

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<vd.at(i).at(j)<<" ";
        }
        cout<<endl;
    }

    //2nd 2D vector
    vector<vector<int> >v2(5,vector<int>(10,0));
    cout<<"printing 2nd 2d vector: "<<endl;

    for(int i=0;i<v2.size();i++)
    {
        for(int j=0;j<v2[i].size();j++)
        {
            cout<<v2.at(i).at(j)<<" ";
        }
        cout<<endl;
    }


    //3rd 2D array
    vector<vector<int> >v3;
    vector<int>v3v0(5,0);   
    vector<int>v3v1(3,1);   
    vector<int>v3v2(4,0);   
    vector<int>v3v3(5,1);   

    v3.push_back(v3v0);
    v3.push_back(v3v1);
    v3.push_back(v3v2);
    v3.push_back(v3v3);

    cout<<"printing 3rd 2d vector: "<<endl;

    for(int i=0;i<v3.size();i++)
    {
        for(int j=0;j<v3[i].size();j++)
        {
            cout<<v3.at(i).at(j)<<" ";
        }
        cout<<endl;
    }
}