// Q. 3n + 1 sequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int index = 0, arr[100000];
void rec(int n) {//3
    if (n == 1  ) {//
        cout << ++index;
        return;
    }
    if (index == 0) {//0 3
        arr[index] = n;
        if (n % 2 == 1) {
            index++;
            arr[index] = 3 * arr[index - 1] + 1;//1 10
            rec(3 * n + 1);
        }
        else {
            index++;
            arr[index] = arr[index - 1] / 2;
            rec(n / 2);
        }
    }
    else {
        if (n % 2 == 1) {
            index++;
            arr[index] = 3 * arr[index-1] + 1;//16
            rec(3 * n + 1);
        }
        else { 
            index++;
            arr[index] = arr[index-1] / 2;
           /*2 5
           */
            rec(n / 2);
        }
    }

}
int main()
{
    int n;
    cin >> n;
    rec(n);
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
