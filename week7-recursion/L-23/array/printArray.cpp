#include <iostream>
#include <vector>
using namespace std;
void printArrayUsingRecursion(vector<int> v,int size,int index)
{
    
    if(index>=size)
        return;
    cout<<v[index]; //if printed here, array will be straight printed
    printArrayUsingRecursion(v,size,index+1);
    // cout<<v[index]; //if printed here, array will be reversibly printed
}
int main()
{
    vector<int> v={2,3,4,5,6};
    int size=5;
    int index=0;
    printArrayUsingRecursion(v,size,index);
}