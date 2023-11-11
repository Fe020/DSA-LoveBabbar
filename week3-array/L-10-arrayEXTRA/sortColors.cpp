#include<iostream>
#include<vector>
using namespace std;


void printVector(const vector<int>& v)
{
    cout << "Elements of the vector array are:" << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}
void sortColors(vector<int>&v)
{
    int l=0;
    int r=v.size()-1;
    for(int i=0;i<r;i++)
    {
        if(v[i]==0)
        {
            cout<<l<<endl;
            cout<<" for position i: "<<i<<", v[i]= "<<v[i]<<endl;
            swap(v[i],v[l]);
            l++;
            printVector(v);
        }
        else if(v[i]==2)
        {
            cout<<r<<endl;
            cout<<" for position i: "<<i<<", v[i]= "<<v[i]<<endl;
            swap(v[i],v[r]);
            r--;
            i--;
            printVector(v);
        }
    }
}
int main()
{
    vector<int> v = {0, 2, 0, 1, 1, 2, 2, 1, 2};
    sortColors(v);
    // Expected output: (0, 0, 1, 1, 2, 2)
    printVector(v);

    return 0;
}





// {
//     cout<<v.size();
//     int a=0;
//     for(int i=0;i<v.size();i++)
//     {
//         int b=a+1;
//         int c=b+1;
//         if(v[i]==0)
//         {
//             cout<<" for position i: "<<i<<", v[i]= "<<v[i]<<endl;
//             cout<<" a= "<<a;
//             cout<<" b= "<<b;
//             cout<<" c= "<<c<<endl;
//             swap(v[i],v[a]);
//             printVector(v);
//             a++;

//         }
//         else if(v[i]==1)
//         {
//             cout<<" for position i: "<<i<<", v[i]= "<<v[i]<<endl;
//             cout<<" a= "<<a;
//             cout<<" b= "<<b;
//             cout<<" c= "<<c<<endl;
//             swap(v[i],v[b]);
//             printVector(v);
//             b++;            
//         }
//         else
//         {
//             cout<<" for position i: "<<i<<", v[i]= "<<v[i]<<endl;
//             cout<<" a= "<<a;
//             cout<<" b= "<<b;
//             cout<<" c= "<<c<<endl;
//             swap(v[i],v[c]);
//             printVector(v);
//             // b++;
//             c++;
//         }
//     }
// }