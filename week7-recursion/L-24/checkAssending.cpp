#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int> v,int index,int size)
{
    if(index>=size-1)
    return true;
    if(v[index]>v[index+1])
    return false;
    else
    return check(v,index+1,size);
}
int main(){
    vector<int> v={10,20,30,40,50};
    int index=0;
    int size=5;
    bool answer=check(v,index,size);
    cout<<answer;
}