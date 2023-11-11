//check even or odd

#include <iostream>
using namespace std;



//simple function method
/*
void EvenOdd()
{
    int number;
    cout << "Enter the number: " << endl;
    cin >> number;
    if(number!= 0)
    {

    if (number % 2 == 0)
        cout << number << " is an even number" << endl;
    else
        cout << number << " is an odd number" << endl;
    }
    else
        cout<<number<<" is neither even nor odd"<<endl;
}
int main()
{
    EvenOdd();
    return 0;
}
*/
 



 //boolean function method
/*
bool even(int num)
{
    if(num%2==0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int num;
    cout<<"enter the number: "<<endl;
    cin>>num;
    bool check= even(num);
    if(check)
    {
        cout<<num<<" is even"<<endl;
    }
    else{
        cout<<num<<" is odd"<<endl;
    }
}
*/




//bit method
void bits(int num)
{
    if ((num & 1) == 0)
        cout << num << " is even" << endl;
    else
        cout << num << " is odd" << endl;
}

int main()
{
    int n;
    cout << "enter the number: " << endl;
    cin >> n;
    bits(n);
    return 0;
}
