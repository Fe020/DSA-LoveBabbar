#include<iostream>
#include<vector>
using namespace std;
int findMin(vector<int> v,int size,int index,int mini)
{
    if(index>=size)
    return mini;
    mini=min(mini,v[index]);
    return findMin(v,size,index+1,mini);

}
int main()
{
    vector<int> v={50,60,100,10,80};
    int size=5;
    int index=0;
    int mini=INT_MAX;
    cout<<"minimum element is: "<<findMin(v,size,index,mini);
}