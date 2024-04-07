
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1[100];
    int n,count=0;
    size_t d=0;
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
   
  
    return 0;
}


