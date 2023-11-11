#include<iostream>
#include<vector>
using namespace std;
int findPeak(int arr[],size_t l)
{
    int s=0;
    int e=l-1;
    int mid;

    //my approach

    // while(s<=e)
    // {
    //     mid=s+(e-s)/2;
    //     if(mid==0)
    //     {
    //         s=mid+1;
    //     }
    //     else if(arr[mid]>arr[mid-1])
    //     {
    //         if(arr[mid]>arr[mid+1])
    //         {
    //             return mid;
    //         }
    //         else
    //         {
    //             s=mid+1;
    //         }
    //     }
    //     else if(arr[mid]<arr[mid-1])
    //     {
    //         e=mid-1;
    //     }
    // }
    // return -1;


    //notice s is not <= e because jb s=mid or e=mid set krte h to <= lgane pr code infinite loop m fss jata h
    while(s<e)  
    {
        mid=s+(e-s)/2;
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;

}
int main()
{
    int arr[5]={3,3,4,2,0};
    int length=sizeof(arr)/sizeof(arr[0]);
    int ans=findPeak(arr,length);
    std::cout<<ans; 
    //used std here kyuki kbhi kbhi code , kuch change krne p using namesoace std shi se kaam ni krta but code run hoti h
}