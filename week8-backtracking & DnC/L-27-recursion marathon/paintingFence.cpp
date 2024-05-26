#include<iostream>
using namespace std;

int paint(int n,int k)
{
    //base case
    if(n==1)
        return k;
    if(n==2)
        return k+k*(k-1);
    //kaam ki baat
    int ans = (k-1) * (paint(n-2,k) + paint(n-1,k));
    return ans;
}

int main()
{
   int n=3; //no of fence
   int k=3; //no. of colors
   int ans=paint(n,k);
   cout<<ans<<endl;
}