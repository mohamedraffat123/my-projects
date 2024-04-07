#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long n,t,y,count1=0,count=0;
    vector<long long>l,r;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t >> y;
        l.push_back(t);
        r.push_back(y);
    }
    for (int j = 0; j < n; j++) {
        if (l[j] == r[j]  ) {
            count++;//poor
        }
        else {
            count1++;
        }
    }
    if (count1>0) {
        cout << "Happy Alex" << endl;
    }
    else {
        cout << "Poor Alex" << endl;
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
