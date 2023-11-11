#include<iostream>
using namespace std;


//using for loop
// int main()
// {
//     int num;
//     cout<<"enter the number: "<<endl;
//     cin>>num;
//     int fac=1;
//     for(int i=1;i<=num;i++)
//     {
//         fac=fac*i;
//     }
//     cout<<fac;
//     return 0;
// }


//using recurssion
int fac(int n)
{
    if (n > 1)
    {
        return n * fac(n - 1); 
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    int result=fac(num); // Store the result of fac(num)
    cout<<"the factorial of "<<num<<" is "<<result<<endl;
    return 0;
}
