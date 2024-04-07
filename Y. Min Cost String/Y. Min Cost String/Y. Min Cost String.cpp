#include <iostream>
using namespace std;
int main()
{
	string s; int counter,arr[26];
	cin >> s;
	for (int i = 0; i < 26; i++) {
		cin >> arr[i];
	}
	for (int j = 0; j < s.size(); j++) {
		 counter = 0;
      if(s[j]=='?'){
		  for (int z = j; z < s.size(); z++) {
			  if (s[z] == '?') {
				  counter++;
			  }
			  else {
				  break;
			  }
		  }//counter
		if (counter == s.size()){
			cout << "0" << endl;
			for (int z = 0; z < s.size(); z++) {
				cout << "a";
			}
			return 0;
		}
		else {
			if (j == 0) {
				int max = INT_MAX, index;
				for (int q = 0; q < s[counter] - 97 + 1; q++) {
					int mycost = abs(arr[s[counter] - 97] - arr[q]);
					if (mycost < max) {
						max = mycost;
						index = q;
					}
					char c = index + 97;
					for (int w = 0; w < counter; w++) {
						s[w] = c;
					}
				}
				j += counter;
			}
			else if (counter+j == s.size()) {
				int max = INT_MAX, index;
				for (int q = 0; q < s[j-1] - 97 + 1; q++) {
					int mycost = abs(arr[s[j-1] - 97] - arr[q]);
					if (mycost < max) {
						max = mycost;
						index = q;
					}
					char c = index + 97;
					for (int w = j; w < counter+j; w++) {
		 				s[w] = c;
					}
				}
				break;
			}
			else {
				int max = INT_MAX,index;
				for (int z = 0; z < 26; z++) {
					int mycost = abs(arr[s[j - 1] - 97] - arr[z]) +
						abs(arr[z] - arr[s[j + counter] - 97]);
					if (mycost < max) {
						max = mycost;
						index = z;
					}
					char c = index + 97;
					for (int w = j; w < counter + j; w++) {
						s[w] = c;
					}
				}
				j += counter;
			}
		}
	  }
	}
	long long costy=0;
	for (int a = 0; a < s.size()-1; a++) {
		costy += abs(arr[s[a] - 97] - arr[s[a+1] - 97]);
	}
	cout << costy<<endl;
	cout << s;

	return 0;
}

