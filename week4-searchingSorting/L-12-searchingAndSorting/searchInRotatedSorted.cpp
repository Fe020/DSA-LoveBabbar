#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> &nums)
{
    int s = 0; 
    int e = nums.size() - 1; 
    int mid;
    
    while (s < e)
    {
        mid = s + (e - s) / 2;
        
        if (nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        else if (nums[mid] < nums[s])
        {
            e = mid;
        }
        else
        {
            s = mid + 1;
        }
    }
    
    return s; // or return s % nums.size(); to handle the case where the array is not rotated
}


int binarySearch(vector<int> v,int s,int e,int target)
{
    cout<<"s= "<<s<<endl;
    cout<<"e= "<<e<<endl;
    int mid;
    if(s==e)
    {
        if(v[s]!=target)
        return -1;
        else
        return s;
    }
    while(s<=e)
    {
        cout<<"mid: "<<mid<<endl;
        mid=s+(e-s)/2;
        if(v[mid]==target)
        {
            return mid;
        }
        else if(v[mid]<target)
        {
            cout<<"v[mid]<target: "<<endl;
            s=mid+1;
        }
        else{
            cout<<"v[mid]>target: "<<endl;
            e=mid-1;
        }
    }
    cout<<"mid: "<<mid<<endl;;
    return -1;
}

int search(vector<int> &nums,int target)
{
    int pivot=findPivot(nums);
    cout<<"pivot: "<<nums[pivot]<<endl;
    int ans=-1;
    if(target<nums[0])
    {
        cout<<"A"<<endl;
        ans=binarySearch(nums,pivot+1,nums.size()-1,target);
    }
    else
    {
        cout<<"B"<<endl;
        ans=binarySearch(nums,0,pivot,target);
    }
    return ans;
}

int main()
{
    vector<int> nums={3,1};
    int target=1;
    int ans=search(nums,target);
    cout<<ans;
}