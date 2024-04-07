#include <iostream>
#include<string>
using namespace std;
int main()
{
	int a, b, z=0;
	 cin >> a>>b;
	int luky_num[10000] = { 0 };
	
	luky_num[4] = 1;
	 luky_num[7] = 1;
	luky_num[47] = 1;
	luky_num[44] = 1;
	luky_num[77] = 1;
	luky_num[74] = 1;
	luky_num[447] = 1;
	luky_num[474] = 1;
	luky_num[477] = 1;
		luky_num[744] = 1;
		luky_num[747] = 1;
		luky_num[777] = 1;
		luky_num[444] = 1;
		luky_num[774] = 1;
		luky_num[4444] = 1;
		luky_num[4447] = 1;
		luky_num[4744] = 1;
		luky_num[4474] = 1;
		luky_num[4477] = 1;
		luky_num[4747] = 1;
		luky_num[7474] = 1;
		luky_num[4744] = 1;
		luky_num[4777] = 1;
		luky_num[4774] = 1;
		luky_num[7777] = 1;
		luky_num[7477] = 1;
		luky_num[7747] = 1;
		luky_num[7774] = 1;
		luky_num[7747] = 1;
		luky_num[7744] = 1;
		luky_num[7477] = 1;
		luky_num[7447] = 1;
		luky_num[7444] = 1;
				
		for (int i = a; i <= b; i ++ ) {
			if (luky_num[i] == 1) {
				cout << i << " ";
				z = 1;
			}
		}
		if (z == 0) {
			cout << "-1";
	    }
		
	

	return 0;
}