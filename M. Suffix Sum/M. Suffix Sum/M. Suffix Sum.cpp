// M. Suffix Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long long index=0,input;
void rec(long long arr[],long long r) {//5 3
    if (r == 0) {
        cout << index;
        return;
    }
    index += arr[input-r];
    rec(arr, r-1);
}
int main()
{
    long long o;
    cin >> input>>o;
    long long* arr;
    arr = new long long[input];
    for (int i = 0; i < input; i++) {
        cin >> arr[i];
    }
    rec(arr,o);
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
