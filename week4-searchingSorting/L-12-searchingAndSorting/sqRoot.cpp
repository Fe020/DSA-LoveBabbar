#include<iostream>
using namespace std;

// int mySqrt(int x)
// {
//     if(x==0 || x==1)
//     {
//         return x;
//     }
//     int s=1;
//     int e=x;
//     long long mid;
//     long long res;
//     while(s<=e)
//     {
//         mid=(s+e)/2;
//         res=mid*mid;
//         if(res==x)
//         {
//             return mid;
//         }
//         else if(res>x)
//         {
//             e=mid-1;
//         }
//         else if(res<x)
//         {
//             s=mid+1;
//         }
//     }
//     return s-1;
// }


float mySqrt(int x)
{
    float s=0;
    float e=x;
    double mid;
    double ans;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(mid*mid==x)
        {
            return mid;
        }
        else if(mid*mid<x)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}


int main()
{
    int x=150;
    float ans=mySqrt(x);
    cout<<ans;
}