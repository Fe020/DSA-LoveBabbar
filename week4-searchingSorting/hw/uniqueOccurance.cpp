#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

 void printVector(vector<int>v)
{
    cout<<"elements of the vector: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<"  size: "<<v.size()<<endl;
}
bool uniqueOccurrences(vector<int>arr) {
    vector<int>total;
    sort(arr.begin(),arr.end());
    printVector(arr);
        
    for(int i=0;i<arr.size();i++)
    {
        int j=1;
        while(i + 1 < arr.size() && arr[i]==arr[i+1])
        {
            j++;
            i++;
        }
        total.push_back(j);
    }
    printVector(total);
    sort(total.begin(),total.end());
    printVector(total);
    for(int i=0;i<total.size();i++)
    {
        if((total[i]==total[i-1]) ||(total[i]==total[i+1]))
        {
            return false;
        }
    }
    return true;
}

int main() {
   vector<int> test_case = {1,2};
    bool result = uniqueOccurrences(test_case);
    
    if(result)
        cout << "true: for each element Unique occurrences " <<endl;
    else
        cout << "false: for each element occurrences are not unique" << endl;

    return 0;
}
