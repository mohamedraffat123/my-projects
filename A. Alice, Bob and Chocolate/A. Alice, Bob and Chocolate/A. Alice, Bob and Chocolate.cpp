#include<iostream>
#include <iostream>
using namespace std;
#include<vector>
int main()
{
    int n;
    cin >> n;
    int* arr;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l = 0, r = n - 1, alice = 0, bob =0 ,sum=0;
    int rsum = arr[r], lsum = arr[l];
    while (l <= r ) {//5 2 9 8 2 7      3 1 1 1
        if (lsum <= rsum) {//1
            lsum += arr[++l];//2
            alice++;//1
        }
        else  {//2
            rsum += arr[--r];//1
            bob++;//1
        }
    }
    cout << alice << " " << bob;
    
    return 0;
}
