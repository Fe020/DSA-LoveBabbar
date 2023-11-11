#include<iostream>
#include<vector>
using namespace std;

// methof 1- my approach

// void maxOne(vector<vector<int> >v)
// {
    
//     int max=INT_MIN;
//     int roww=1;
//     vector<vector<int> >inside;
//     vector<int>counting;
//     for(auto row:v )
//     {
//         int count=0;
//         for(int element : row)
//         {
//             if(element==1)
//             count++;
//         }
//         counting.push_back(count);
//         inside.push_back({roww,count});
//         cout<<"for row : "<<roww<<" count = "<<count<<endl;
//         roww++;
//     }


    
//     for(int i=0;i<counting.size();i++)
//     {
//         if(counting[i]>max)
//         {
//             max=counting[i];
//         }
//     }
//     for(int i=0;i<counting.size();i++)
//     {
//         if(counting[i]==max)
//         {
//             cout<<"{ ";
//             for(int j=0;j<inside[0].size();j++)     //inside[0]=column
//             {
//                 cout<<inside[i][j]<<" ";
//             }
//             cout<<"}";
//         }
//     }
// }


//method 2

void maxOne(vector<vector<int> > v)
{
    vector<int> ans;
    int max=INT_MIN;
    int rowNo;
    for(int i=0;i<v.size();i++)
    {
        int count=0;
        for(int j=0;j<v[i].size();j++)
        {
            if(v[i][j]==1)
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            rowNo=i;
        }
    }
    ans.push_back(rowNo);
    ans.push_back(max);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}


int main()
{
    vector<vector<int> >matrix={{0,0,1},{1,1,1},{1,0,1}};
    maxOne(matrix);
}