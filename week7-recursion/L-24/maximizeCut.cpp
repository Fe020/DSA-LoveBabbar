#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int maximizeTheCuts(int n, int x, int y, int z)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MIN; // code not feasible
    //1 cut mara x length ka fir aage bhej diya recusrion ko,isley 1+function hua h
    int option1 = 1 + maximizeTheCuts(n - x, x, y, z);
    int option2 = 1 + maximizeTheCuts(n - y, x, y, z);
    int option3 = 1 + maximizeTheCuts(n - z, x, y, z);

    return max(max(option1, option2), option3);
}

int main()
{
    int n, x, y, z;
    cout<<"enter the length of rod: "<<endl;
    cin >> n;
    cout<<"enter the 3 cut legths: "<<endl;
    cin>>x>>y>>z;
    int maxCuts = maximizeTheCuts(n, x, y, z);

    if (maxCuts == INT_MIN)
        cout << "0" << endl;
    else
        cout <<"maximum possible number of cuts: "<< maxCuts << endl;

    return 0;
}
