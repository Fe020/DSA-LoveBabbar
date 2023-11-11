#include<iostream>
using namespace std;


//sum of 3 numbers
    // int add(int a, int b,int c)
    // {
    //     int sum= a+b+c;
    //     return sum;
    // }
    // int main()
    // {
    //     cout<<add(4,5,1)<<endl;
    //     return 0;
    // }

//max of 3 sumbers
    int max(int a, int b, int c)
    {
        if(a>b && a>c)
        return a;
        else if(b>a && b>c)
        return b;
        else return c;
    }

    int main()
    {
        int maximum = max(2,3,-8);
        cout<<"maximum no.: "<<maximum<<endl;
    }
