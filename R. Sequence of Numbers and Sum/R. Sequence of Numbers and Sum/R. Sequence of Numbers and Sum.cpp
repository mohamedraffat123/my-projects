
#include <iostream>
using namespace std;
int main()
{
    long long a, b,sum1;
        
   while(cin >> a >> b) {
          sum1 = 0;
        if (a <= 0 || b <= 0) {
            return 0;
        }
         if (b > a )
            for (long long z = a; z <= b; z++) {
                cout << z << " "; 
                sum1 += z;
               
            }
         else{ 
            for (long long j = b; j <= a; j++) {
                  cout << j<<" "; 
                  sum1 += j;
             
            }
         }
        cout << " sum =" << sum1<<endl;
      
   }

    return 0;
}
