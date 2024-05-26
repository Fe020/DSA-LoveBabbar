#include<iostream>
#include<vector>
using namespace std;

// int partition(vector<int> &v,int s,int e)
// {
//     int i=s-1;
//     int j=s;
//     int pivot=e;
//     while(j<pivot)
//     {
//         if(v[j]<=v[pivot])
//         {
//             i++;
//             swap(v[j],v[i]);
//         }
//         j++;
//     }
//     i++;
//     swap(v[i],v[pivot]);
//     return i;
// }
void quickSort(vector<int> &v,int s,int e)
{
    //base case
    if(s>=e)
        return;
    //partition
    int i=s-1;
    int j=s;
    int pivot=e;
    while(j<pivot)
    {
        if(v[j]<v[pivot])
        {
            i++;
            swap(v[j],v[i]);
        }
        j++;
    }
    i++;
    swap(v[i],v[pivot]);
    //recursion
    quickSort(v,s,i-1);
    quickSort(v,i+1,e);
    // merge()
}
int main()
{
    vector<int> v={1,9,2,4,6,8,3,7,0,5};
    int s=0;
    int e=v.size()-1;
    quickSort(v,s,e);
    for(auto i:v)
    {
        cout<<i<<" ";
    }
}