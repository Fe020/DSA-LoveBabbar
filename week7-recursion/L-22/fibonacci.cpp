#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n<=0)
    return 0;
    if(n==1)
    return 1;
    int ans= fibonacci(n-1)+fibonacci(n-2);
    return ans;
}

int main()
{
    int n;
    cout<<"enter the number index of fibonacci series: "<<endl;
    cin>>n;
    cout<<n<<"th finbonacci number is: "<<fibonacci(n);
    // int answer=fibonacci(n);
    // cout<<answer;
    return 0;
}