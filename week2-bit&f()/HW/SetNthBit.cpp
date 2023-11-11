#include<iostream>
using namespace std;

int SetNthBit(int n,int k)
{
    int x=1<<k;
    return x|n;
}
int main()
{
    int n,k;
    cout<<" enter the number N: "<<endl;
    cin>>n;
    cout<<" enter the number K: "<<endl;
    cin>>k;
    cout<<n<<" shifting "<<k<<" times: "<<SetNthBit(n,k);
    return 0;
}