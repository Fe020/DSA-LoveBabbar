// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector<int>&nums,int s,int e,int target)
{
    int mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]>target)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}

int pivotIndex(vector<int>&nums)
{
    int s=0,e=nums.size(),mid;
    while(s<=e)
    {

        mid=(s+e)/2;
        if(nums[mid]>nums[mid+1])
        {
            return mid;
        }
        else if(mid<mid+1)
        {
            if(nums[0]>nums[mid])
            {
                e=mid-1;
            }
            else if(nums[0]<nums[mid])
            {
                s=mid+1;
            }
        }
    }
    return -1;
}
int search(vector<int> &nums, int target)
{
    if(target<nums[0])
    {
        return binSearch(nums,pivotIndex(nums)+1,nums.size(),target);
    }
    else if(target>nums[0])
    {
        return binSearch(nums,0,pivotIndex(nums),target);
    }
    else
        return -1;
}

int main()
{
    vector<int>nums={5,6,7,8,9,10,0,1,2,3,4};
    int target=10;
    cout<<search(nums,target);
}