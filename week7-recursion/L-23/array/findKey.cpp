#include<iostream>
#include<vector>
using namespace std;
bool findKey(vector<int> v,int size,int index,int key)
{
    if(index>=size)
        return false;
    if(v[index]==key)
        return true;
    bool answer=findKey(v,size,index+1,key);
    return answer;
}
int main()
{
    vector<int> v={11,22,33,44,55};
    int size=5;
    int index=0;
    int key=44;
    if(findKey(v,size,index,key)==0)
        cout<<"key not found"<<endl;
    else 
        cout<<"key found"<<endl;
}