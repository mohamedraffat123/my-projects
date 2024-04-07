// R. Palindrome Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long long input, index = 0;
void rec(long long arr[]) {//4
    if (index >= input){
        cout << "YES";
        return;
    }
    if (arr[index] == arr[input - 1]) {
        input--;//5 4 3
        index++;
        //0 1 2
      //  cout << arr[index] << " " << arr[input - 1];
        rec(arr);
    }
    else {
        cout << "NO";
        return;
    }
}
int main()
{
    cin >> input;
    long long *arr;
    arr = new long long[input];
    for (int i = 0; i < input; i++) {
        cin >> arr[i];//1 2 3 4
    }
    rec(arr);
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
