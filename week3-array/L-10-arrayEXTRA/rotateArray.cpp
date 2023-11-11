//method 1-my method


// #include<iostream>
// #include<vector>
// using namespace std;

// void printVector(vector<int> v)
// {
//     for(auto i: v)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

// void rotatedVector(vector<int> v, int k)
// {
//     vector<int>temp;
//     for(int i=v.size()-k;i<v.size();i++)
//     {
//         temp.push_back(v[i]);
//     }
//     // printVector(temp);
//     for(int i=v.size()-1;i>-1;i--)
//     {
//         v[i]=v[i-k];
//     }
//     // printVector(v);
//     for(int i=0;i<k;i++)
//     {
//         v[i]=temp[i];
//     }
//     printVector(v);
// }

// int main()
// {
//     vector<int> v={0,1,2,3,4,5,6,7,8,9,10};
//     int k=3;
//     rotatedVector(v,k);     //3,4,5,0,1,2,3
// }





// //method 2

// #include<iostream>
// #include<vector>
// using namespace std;

// void printVector(vector<int> v)
// {
//     for(auto i:v)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

// void  rotatedVector(vector<int> v,int k)
// {
//     // vector<int> temp;       //can not proceed like this in below for loop ,because size is undefined
//     vector<int> temp(v.size(),0);   //size declared
//     for(int i=0;i<v.size();i++)
//     {
//         temp[(i+k)%v.size()]=v[i];
//     }

//     v.clear();
//     for(int i=0;i<temp.size();i++)
//     {
//         v.push_back(temp[i]);
//     }
//     printVector(v);
// }

// int main()
// {
//     vector<int> v={0,1,2,3,4,5,6,7,8,9,10};
//     int k=3;
//     rotatedVector(v,k);     //3,4,5,0,1,2,3
// }





// method 3- lappu sa to method h


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void printVector(vector<int> v)
// {
//     for(auto i: v)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
// void rotatedVector(vector<int> v,int k)
// {
//     reverse(v.begin(),v.end());
//     reverse(v.begin(),v.begin()+k);
//     reverse(v.begin()+k,v.end());
//     printVector(v);
// }

// int main()
// {
//     vector<int> v={0,1,2,3,4,5,6,7,8,9,10};
//     int k=3;
//     rotatedVector(v,k);
// }