//write all numbers seperately using functiond
#include<iostream>
using namespace std;

int digits(int n)
{
    if(n>10)
    {
        int rem=n%10;
        cout<<rem<<endl;
        n=n/10;
        return digits(n);
    }
    else
        return n;
}

int main()
{
    int n;
    cout<<"enter a number: "<<endl;
    cin>>n;
    cout<<"digits of the number "<<n<<" is: "<<digits(n)<<endl;
    return 0;
}