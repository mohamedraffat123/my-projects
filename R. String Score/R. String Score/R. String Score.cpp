// R. String Score.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    string s; long long sum = 0,n;
   cin>>n;
   cin >> s;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == 'V') {
            sum += 5;
        }
        else if (s[i] == 'W') {
            sum += 2;
        }
        else if (s[i] == 'X') {
            if (i != s.size() - 1) { ++i; }
        }
        else if(s[i]=='Y')
        {
            if (i != s.size() - 1) {
                s.push_back(s[i + 1]);
                i++;
            }
        }
        else if(s[i]=='Z') {
            if (i != s.size() - 1) {
                if (s[i + 1] == 'V') {
                    sum /= 5;
                    ++i;
                }
                else if (s[i + 1] == 'W') {
                    sum /= 2;
                    ++i;
                }
            } 
        }
    }
    cout << sum;
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
