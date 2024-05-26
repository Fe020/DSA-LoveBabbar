//we keep iterating the vector and when we find any element where v[i-1]>v[i]
//we keep swapping the v[i] using loop inside loop, till it is sorted

//iterate krte h hrr element ko aur tbtk swap krte h usko jbtk uska position shi na ho


#include<iostream>
#include<vector>

using namespace std;
void swap(int &i,int &j)
{
    int temp;
    temp=i;
    i=j;
    j=temp;
}
void insertionSort(vector<int>& v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=i;j>=0;j--)
        {
            if(v[j]<v[j-1] && j-1>=0)
            swap(v[j],v[j-1]);
        }
    }
}
int main()
{
    vector<int> v={5,4,3,7,6,0};
    insertionSort(v);
    for(auto i:v)
    {
        cout<<i<<" ";
    }
}