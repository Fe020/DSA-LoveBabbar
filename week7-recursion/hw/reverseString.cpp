#include<iostream>
#include<string.h>
using namespace std;
void solve(string &str,int s,int e)
{
    //base case
    if(s>=e)
        return;
    //solve one case
    swap(str[s],str[e]);
    //recursion
    return solve(str,s+1,e-1);
}
int main()
{
    string str="abcdxefg";
    int s=0;
    int e=str.length()-1;
    solve(str,s,e);
    cout<<str<<endl;
    return 0;
}