#include<iostream>
using namespace std;

int pow(int n)
{
    if(n==0)
    return 1;
    return 2*pow(n-1);
}

int main()
{
    int n;
    cout<<"Power: ";
    cin>>n;
    cout<<"2 raised to the power "<<n<<" is: "<<pow(n);
    return 0;
}