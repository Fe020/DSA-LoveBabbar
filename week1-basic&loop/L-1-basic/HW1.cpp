// decimal to binary steps:
//   1.divide no. by 2
//   2.store reminder
//   3.repeat above steps with quotient
//   4.reverse the stored no.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int quo;
    int rem;
    int num;
    cout<<"enter the number: "<<endl;
    cin>>num;
    string b="";
    while(num!=0)
    {
        b=b.append(to_string(num%2));
        num=num/2;  
    }
    for(int i=b.length();i>=0;i--)
    cout<<b[i];

}