// I. Divisability.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    // rule of the divsibility
    long long a, b, c, sum1,sum2;
    cin >> a >> b >> c;
    long long ma = max(a, b);
    long long mi = min(a, b);
    long long e = ma / c;
    long long f = (mi-1) / c;
    sum1 = ((e * (e + 1) )/ 2) * c;
    sum2 = ((f * (f + 1) )/ 2) * c;
    cout << sum1-sum2;
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
