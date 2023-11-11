//even,odd,positive,negative




#include<iostream>
using namespace std;
int main()
{


//number is positive,negative or zero

//     cout<<"enter a number to check if its positive negative or zero"<<endl;
//     int x;
//     cin>>x;
//     if(x>0)
//         cout<<"positive:number is greater than zero"<<endl;
//     else if(x<0)
//         cout<<"negative:number is less than zero"<<endl;
//     else
//         cout<<"zero:number is zero"<<endl;




//number is even,odd or nun

    cout<<"enter number to check if it's even odd or none"<<endl;
    int x;
    cin>>x;
    if(x<=0)
    {
        if(x==0)
            cout<<"zero is neither even nor odd"<<endl;
        else
            cout<<"negative numbers are neither even nor odd"<<endl;
    }
    else if(x%2==0)
    cout<<"number is even"<<endl;

    else
    cout<<"number is odd"<<endl;


}