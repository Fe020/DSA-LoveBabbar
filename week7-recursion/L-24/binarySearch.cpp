#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>v,int size,int key,int left,int right)
{
    if(right>=size || left<0 || left>right)
        return -1;
    int mid=left+ (right-left)/2;
    if(v[mid]<key)
        return binarySearch(v,size,key,mid+1,right);
    else if(v[mid]>key)
        return binarySearch(v,size,key,left,mid-1);
    else
        return mid;
    return -1;
}
int main()
{
    vector<int> v={10,20,30,50,80};
    int size=5;
    // int index=0;
    int key=80;
    int left=0;
    int right=size-1;
    int answer=binarySearch(v,size,key,left,right);
    if(answer==-1)
    cout<<"element is not present in the array";
    else
    cout<<"element is present at index: "<<answer;
}