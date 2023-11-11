#include<iostream>
using namespace std;

int main()
{
    int k;
    cout << "Enter the number: ";
    cin >> k;

    int count = 0;

    for (int i = k; i > 0; i = i / 2)
    {
        int rem = i % 2;
        if (rem == 1)
        {
            count++;
        }
    }

    cout << "Number of set bits: " << count << endl;

    return 0;
}

