#include<iostream>
using namespace std;

int divide(int dividend, int divisor)
{
    if(dividend==0)
    return 0;
    int ndividend=dividend;
    if(dividend<0)
    {
        ndividend=-dividend;
    }
    int ndivisor=divisor;
    if(divisor<0)
    {
        ndivisor=-divisor;
    }
    int s=0;
    int mid;
    int e=ndividend;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(mid*ndivisor==ndividend)
        {
            if((dividend>0 && divisor>0) || (dividend<0 && divisor<0))
                return mid;
            else if((dividend>0 && divisor<0) || (dividend<0 && divisor>0))
                return -mid;
        }
        else if(mid*ndivisor>ndividend)
            e=mid-1;
        else if(mid*ndivisor<ndividend)
        {
            if((mid+1)*ndivisor>ndividend)
            {
            if((dividend>0 && divisor>0) || (dividend<0 && divisor<0))
                return mid;
            else if((dividend>0 && divisor<0) || (dividend<0 && divisor>0))
                return -mid;
            }
            else
                s=mid+1;
        }
    }
    return -1;
}
int main()
{
    int dividend=0;
    int divisor=1;
    cout<<divide(dividend,divisor)<<endl;
}