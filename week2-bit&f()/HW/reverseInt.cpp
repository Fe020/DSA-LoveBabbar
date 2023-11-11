#include<iostream>
using namespace std;

int rev(int n)
{ 
    
    int r=n%10;
    cout<<r;
    int q=n/10;
    if(q!=0)
    {
        return rev(q);
    }
}

int main ()
{
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int result=rev(n);
    cout<<result;
    return 0;
}
