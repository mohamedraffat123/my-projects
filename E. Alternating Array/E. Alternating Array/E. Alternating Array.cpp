// E. Alternating Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n, * z,sum=0,sum1=0;
    cin >> n;
    z = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> z[i];
    }
    for (int j = 0; j < n; j ++) {
       
            if (j % 2 == 0 && z[j] < 0) {
                sum++;
            }
            else if (j % 2 == 1 && z[j] > 0) {
                sum++;
            }
       
            if (j % 2 == 0 && z[j] > 0) {
                sum1++;
            }
            else if (j % 2 == 1 && z[j] < 0) {
                sum1++;
            }
        
        
    }
    if(sum<=sum1)
    cout << sum << endl;
    else {
        cout << sum1<<endl;
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
