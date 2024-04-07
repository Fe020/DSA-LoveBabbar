#include<iostream>
using namespace std;

void print(int n){
    if(n==1)      //base case
    {
        cout<<"1";
        return;
    }
    
    cout<<n<<" , ";      //processing
    print(n-1);       //recursive relation
    
    //reverse the order of PROCESSING ans RR to get order: 1,2,3,4...n
}

int main()
{
    cout<<"enter the number: "<<endl;
    int n;
    cin>>n;
    cout<<"print upto "<<n<<": ";
    print(n);
    cout<<endl;
    return 0;
}