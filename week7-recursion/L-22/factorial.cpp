#include<iostream>
using namespace std;

int factorial(int n)
{

    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

int main()
{
    cout<<"the number whose factrial you wanna find: ";
    int n;
    cin>>n;
    cout<<endl;
    cout<<"factorial of the given number is: "<<factorial(n);
    return 0;
}