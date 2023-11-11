// for int i=1 to n a number is repeating...find that
#include<algorithm>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<vector>
using namespace std;



// method 1- my approach
// drawback- time complecity is O(nlogn) because inbuilt sort function has this time complexity only

// int duplicateNum(vector<int> nums)
// {  
//     sort(nums.begin(),nums.end());
//     for(int i=0;i<nums.size()-1;i++)
//     {
//         if(nums[i]==nums[i+1])
//         {
//             return nums[i];
//         }
//     }
//     return -1;
// }



// method 2- using value at index
//drawback- array is being modified

// int duplicateNum(vector<int> nums)
// {
//     for(int i=0;i<nums.size();i++)
//     {
//         // int visit=-1;
//         // cout<<i<<". for index "<<nums[abs(nums[i])];
//         nums[abs(nums[i])]=-1*nums[abs(nums[i])];
//         // cout<<i<<","<<(nums[i])<<", value/nums[nums[i]] = "<<nums[abs(nums[i])]<<endl;
//         if((nums[abs(nums[i])])>0)
//         {
//             return abs(nums[i]);
//         }
//     }
//     return -1;
// }



// method 3- positioning method
int duplicateNum(vector<int> nums)
{
    while(nums[0]!=nums[nums[0]])
    {
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];
    // return -1;
}


int main()
{
    vector<int>v={3,2,3};
    cout<<duplicateNum(v);
}