#include<iostream>
using namespace std;
int dearrangement(int n)
{
    //base case
    if(n<=1)
        return 0;
    if(n==2)
        return 1;
    //kaam ki baat
    int answer=(n-1)*(dearrangement(n-1)+dearrangement(n-2));
    return answer;
}
int main()
{
    int n=4;
    // int i=0;
    //for an integer array of size 4, write total number of dearrangements possible
    int ans= dearrangement(n);
    cout<<ans<<endl;
}