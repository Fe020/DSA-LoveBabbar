#include <iostream>
using namespace std;

// Function to check if a number is prime
int prime(int n)
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
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    int result = prime(n);
    if (result == 0)
    {
        cout << n << " is not a prime number." << endl;
    }
    else
    {
        cout << n << " is a prime number." << endl;
    }

    return 0;
}
