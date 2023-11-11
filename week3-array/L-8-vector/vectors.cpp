// // int vector

// #include<iostream>
// #include<vector>
// using namespace std;
// void printVector(vector<int>v)
// {
//     cout<<"elements of the vector: "<<endl;
//     for(int i=0;i<v.size();i++)
//     {
//         // cout<<v[i]<<" "; 
//         //or
//         cout<<v.at(i)<<" ";
//     }
//     cout<<"  size: "<<v.size()<<endl;
// }
// void printVector2(vector<int>v)            //vector printing method
// {
//     cout<<"elements of the integer vector array is:"<<endl;
//     for(auto  i: v)                         //for-each it in v
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     printVector(v);
//     // printVector(v2);
// //add any no. times at any point of time
//     v.push_back(55);
//     printVector(v);
//     // printVector(v2);

// //remove any no. times at any point of time
//     v.pop_back();
//     v.pop_back();
//     printVector(v);
//     // printVector2(v);

// //adding more elements
//     for(int i=0;i<10;i++)
//     {
//         v.push_back(10);
//     }
//     printVector(v);
//     // printVector2(v);

// //clear vector
//     v.clear();
//     printVector(v);
//     // printVector2(v);
// }




//char vector

#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<char>v)
{
    cout<<"elements of the character vector array is:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    cout<<endl;
}
void printVector2(vector<char>v)            //vector printing method
{
    cout<<"elements of the character vector array is:"<<endl;
    for(auto  i: v)                         //for-each it in v
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
//vectir intialization: 1
    vector<char>v1(5,'a');      //first specify no. of elements(can be changed later) then the to be repeat element
    cout<<"---vector v1---"<<endl;
    printVector(v1);
//vectir intialization: 2
    vector<char>v2={'a','i','c','t','e'};       //enter all the elements
    //or prefer upeer one approach
    // vector<char>v2{'a','i','c','t','e'};
    cout<<"---vector v2---"<<endl;
    printVector(v2);

//vector initialization: 3
    vector<char>v3(v2);
    cout<<"---vector v3---"<<endl;
    cout<<"front element"<<v3.front()<<endl;
    cout<<" element"<<v3.back()<<endl;
    v3.erase(v3.begin()+2);
    // cout<<"hello"<<v3.begin()<<endl;
    printVector(v3);
    printVector2(v3);
    
//vector initialization: 4

}