#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> v)
{
    cout << "elements of the vector: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}

int count(vector<int> v, int k)
{
    int counting = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v.at(i) == k)
            counting++;
    }
    return counting;
}

int main()
{
    vector<int> v = {1, 2, 2, 3, 2, 3, 4, 4, 4, 5, 6, 6, 6, 7, 7, 7};
    for (int i = 0; i < v.size();i++)
    {
        int total = count(v, v.at(i));
        cout << "for index :" << i << " and int : " << v.at(i) << " count = " << total << endl;
        if (total == 3)
        {
            int num=v[i];
            // auto rem= remove(v.begin(), v.end(), num);
            v.erase(remove(v.begin(), v.end(), num), v.end());
            printVector(v);
            cout << "\n";
            i--;
        }
    }
    printVector(v);
}
