// // method-1 my approach




// #include<iostream>
// #include<vector>
// using namespace std;


// void printVector(const vector<int> &v)
// {
//     for(auto i : v)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
// void rearrangeArray(vector<int>v)
// {
//     int positiveIndex=0;
//     for(int i=0;i<v.size();i++)
//     {
//         if(v[i]>-1)
//         {
//             swap(v[positiveIndex],v[i]);
//             positiveIndex++;
//         }
//     }
//     for(int i=1;i<v.size();i+=2)
//     {
//         if(v[i>-1])
//         {
//             swap(v[i],v[positiveIndex]);
//             positiveIndex++;
//         }
//     }
//     cout<<"rearranged array: ";
//     printVector(v);
// }
// int main()
// {
//     vector<int> v = {3, 1, -2, 0, -5, 2, -4};
//     cout<<"initial array: ";
//     printVector(v);
//     rearrangeArray(v);
//     return 0;
// }



//method-2




#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>v)
{
    cout<<endl;
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;
}
void rearrangeArray(vector<int>v)
{
    vector<int>positive,negative;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<0)
        {
            negative.push_back(v[i]);
        }
        else
        {
            positive.push_back(v[i]);
        }
    }
    v.clear();
    for(int i=0;i<positive.size()+negative.size();i++)
    {
        if(i%2==0)
        {
            v.push_back(positive[i/2]);
        }
        else
        {
            v.push_back(negative[(i/2)]);
        }
    }
    cout<<"negative vector elements : ";
    printVector(negative);
    cout<<"positive vector elements : ";
    printVector(positive);
    cout<<"rearranged vector elements : ";
    printVector(v);
}
int main()
{
    vector<int>v={3, 1, -2, 0, -5, 2, -4};
    rearrangeArray(v);
}