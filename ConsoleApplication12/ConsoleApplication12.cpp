// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1[100];
    int n, count = 0;
    size_t d = 0;
    string arr[100];
    cin >> n;
    for (int i = 0;i < n;i++) {
        getline(cin, s1[i]);
    }
    for (int p = 0;p < n;p++) {
        d = s1[p].rfind(" ");
        arr[p] = s1[p].substr(d);
    }
    for (int j = 0;j < n;j++) {
        for (int y = 0;y < j;y++) {
            if (arr[j] == arr[y])
                count++;
        }
    }
    if (count >= 1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    system("pause");
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
