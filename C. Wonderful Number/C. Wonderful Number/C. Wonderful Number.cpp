// C. Wonderful Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
long number1(string);
long number(long);
int main()
{
    string n;
    cin >> n;
  int x= number1(n);
  int z = stoi(n);
  x += number(z);
  if (x == 2) {
      cout << "YES";
  }
  else {
      cout << "NO";
  }
    return 0;
}
long number1(string a) {
    long x = stol(a);
    string binary,binary2;
    int i = 0,l=0;
    while (x > 0) {
        if (x % 2 == 0) {
            binary[i] = '1';
        }
        else {
            binary[i] = '0';
        }
        x /= 2;
    }
    for (int e = i; e >= 0; e--) {
        binary2[l] = binary[e];
        l++;
    }
    long q = stol(binary);
    long w = stol(binary2);
    if (q == w ) {
        return 1; 
    }
    else {
        return 0;
    }
}
long number(long k) {
    if (k % 2 == 1) {
        return 1;
    }
    else {
        return 0;
    }
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
