#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<map>
using namespace std;
int main() {
	priority_queue<int>st;
	// set it sort the number and have all numbers unique
	set<int>q;
	q.insert(1);
	q.insert(2);
	q.insert(3);
	q.insert(4);
	q.insert(5);
	for (auto i: q)cout << i << endl;
	cout<<q.count(1)<<endl;// it will print the 0 or 1 to check if the number is existed or not
	cout << *q.begin()<<endl;// to give the smallest value
	cout << *q.rbegin()<<endl;// to print the largest value
	// the difference between the set and multi set is that multiset have all number and doesn't have a unique property all of that with sorting
	multiset<int >st1;
	st1.insert(1);
	st1.insert(2);
	st1.insert(3);
	st1.insert(4);
	st1.insert(2);
	st1.insert(5);
	 st1.erase(2);// if you put erase like that it will remove all 2 that exist in the array 
    st1.erase(st1.find(2));// but here i will give the position that i want for him to delete in the array by searching through pointer
	//--------------------------------------------------------------------------------------//
	/* map */
	map<string, int>st2; //first string is the key and the secound key is the map and have a unique property
	st2["mohammed"] = 2;
	//but if we want to inset we should do
	st2.insert({ "ahmed",35 });//we should open curl braket 
	for (auto i : st2) {// to see all values in the map
		cout << i.first << " " << i.second;
	}// int the map they sort it according to the key example if we have a name like ahmed amr osama this sorted form form osama ahmed amr
	cout << endl;
	return 0;
}