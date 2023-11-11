//here, pivot is defined as a number where sum of left = sum of right
#include<iostream>
#include<vector>
using namespace std;


//bruteforce-O(n^2)

// int findPivot(vector<int>v)
// {    
//     for(int pivot=1;pivot<v.size();pivot++)
//     {
//         int leftSum= 0;
//         int rightSum=0;
//         for(int i=0;i<pivot;i++)
//         {
//             leftSum+=v[i];
//         }
//         for(int i=pivot+1;i<v.size();i++)
//         {
//             rightSum+=v[i];
//         }
//         if(leftSum==rightSum)
//         {
//             return pivot;
//         }
//     }
//     return -1;
// }


// optimum solution- O(n)

int findPivot(vector<int>v)
{
    int totalSum=0;
    for(int i=0;i<v.size();i++)
    {
        totalSum+=v[i];
    }
    int leftSum=0;
    int rightSum=0;
    for(int i=1;i<v.size();i++)
    {
        // int PivotSum=0;
        leftSum+=v[i-1];
        rightSum=totalSum-leftSum-v[i];
        if(leftSum==rightSum)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int>v={3,1,9,77,1,6,6};
    int ans=findPivot(v);
    cout<<ans<<endl; 
    
}