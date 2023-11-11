//here pivot element is where sum of left = sum of right

#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int>& nums)
    {   
        int s=0;int e=nums.size()-1;int mid;
        int leftSum=nums[s];int rightSum=nums[e];
        while(s<=e)
        {
            if(leftSum<rightSum)
            {
                s=s+1;
                if(leftSum==0)
                {
                    return e-1;
                }
                else
                {
                    leftSum+=nums[s];
                }
            }
            else if(leftSum>rightSum)
            {
                if(rightSum==0)
                {
                    return s;
                }
                else
                {   
                    e=e-1;
                    rightSum+=nums[e];
                }
            }
            else
            {
                if((e-1)==(s+1))
                return e-1;
            }
        }
        return -1;
    }

int main()
{
    vector<int> v={1,2,7,3};
    int ans=pivotIndex(v);
    cout<<ans;
    return 0;
}