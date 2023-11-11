#include<iostream>
using namespace std;

bool prime(int n)
{
    for(int i=2;i<=n/2;i++)
    { 
        if((n%i)==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;
    cout<<"enter the number: "<<endl;
    cin>>num;
    cout<<"here is the list of all prime numbers from 0 to "<<num<<endl;


    for(int j=2;j<=num;j++)
    {
        int result= prime(j);

        if(result==1)
        {
            cout<<j<<endl;
        }
    }
}