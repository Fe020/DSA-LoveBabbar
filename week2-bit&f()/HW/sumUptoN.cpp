#include<iostream>
using namespace std;
int sumupton(int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    cout<<"sum upto "<< n <<" :"<<sumupton(n);
    return 0;
}