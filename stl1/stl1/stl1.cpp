#include <iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
#include<deque>
#include<list>
using namespace std;
bool isodd(int i) {
	return i % 2;
}
int main()
{
	vector<int>s(5, 6);/* intialization of vector the normal is 0 but we can change that by
	add next to size theintiale value */
	vector<int>r = { 1,2,3,4,5 };
	cout << r.front() << endl;//give the first value
	cout << r.at(3) << endl;// to give the number at {6}
	cout << r.back() << endl;//give the finale result
	r.push_back(6);
	r.push_back(8);
	cout << r[r.size() - 1] << endl;
	r.pop_back();
	cout << r[r.size() - 1] << endl;
	vector<int > s1 = { 1,2,3,4,5 };
	//to give the first result
	vector<int > q(s1);
	for (int i = 0; i < s1.size(); i++) { cout << q[i]; }
	cout << endl;
	vector<int > ::iterator it;//that is something near to pointer 
	it = s1.begin();
	for (it = s1.begin(); it != s1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	auto x=45;
	//auto v3 = s1;// is the easy way instead of writing vector <int >v3 (s1) and can use also in the itrator
	auto it1 = s1.begin();
	vector<int> v3 = { 50,5,8,66,521,63,1,99,88 };
	sort(v3.begin(), v3.begin()+6);// it used a heap sort and the time compilexty for that is o(nlog(n))

	for (auto i : v3) {// it is called for_each and perferable that you use auto
		cout << i <<"." ;
	}
	cout << endl;
	v3.emplace(v3.begin()+2, 55);// here he will put the number 55 after the index'1' amd it is faster than the insert in time complixity
	v3.erase(v3.begin());// here it wiil delete the first number 
	v3.erase(v3.begin() + 1);
	/*2D vector*/
	vector<vector<int>>v4(4, vector<int>(4, 2));//it means it will create the 2D vector with intial value 2 for all matrix 28*28
	for (int i = 0; i < v4.size(); i++) {
		for (int j = 0; j < v4.size(); j++) {
			cout << "|" << v4[i][j];
		}
		cout << endl;
	}
	//----------------------------------------------------------------------------------------------------------------------------------//
	cout << "---------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout << "pair" << endl;
	/* pair */
	pair<string, int>p;
	p.first = "mohamed raafat";
	p.second = 21;
	cout << "pair the first explain\n" << p.first << " " << p.second << endl;
	p = make_pair("mohamed raafat", 21);//there is secound way for intialization
	//we can you can use pair to take three parameter like the name ,age and the birth
	pair<string, pair<int, int>>z{ "mohamed raafat awad",{21,2003} };
	cout << "the secound example\n" << z.first << " " << z.second.first << " " << z.second.second << endl;
	//but if we want to take many names and ages so we use the vector of pairs
	vector<pair<string, int>>v;
	v.push_back({ "mohamed raffat", 21 });
	v.push_back({ "abdlerahman",20 });
	cout << "the third example\n" <<" " << v[0].first<<" "<<v[0].second<<endl;
	//if we want to use the itrator 
	auto it5 = v.begin();
	cout << " the fourth example \n" << " " << it5->first<<" "<<it5->second << endl;
	//if we wnat to sort this vector of pair according to first
	vector<pair<int, int>>v6;
	v6.push_back({ 55, 6 });
	v6.push_back({ 45, 3 });
	v6.push_back({ 33, 8 });
	sort(v6.begin(), v6.end());
	cout << "the fifth example \n";
	for (auto i : v6) {
		cout << i.first <<" " <<i.second;
	}
	cout << endl;
	//it will sort accordig to first but if we want to sort according to secound there is a function called compare
	//----------------------------------------------------------------------------------------------------------------------------------//
	cout << "---------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "stack" << endl;
	/* stack */
	stack< int >w;
	w.push(44);
	cout <<"the first example " << w.top() << endl;// to peek to the final value
	w.push(5);
	w.push(1);
	cout << w.top() << endl;
	w.pop();
	cout << w.top() << endl;
	//----------------------------------------------------------------------------------------------------------------------------------//
	cout << "---------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "queue" << endl;
	/* queue */
	queue<int>e;
	e.push(12);
	e.push(11);
	e.push(10);
	cout << e.front() << endl;
	e.pop();
	cout << e.front() << endl;
	while (!e.empty()) {
		cout << e.front() <<" ";
		e.pop();
	}
	cout << endl;
	//there is e.back() to see the last elemenet--->rear
	 /* the queue can be used in many algorithm lile breadth first traversal that used in graph*/
	//----------------------------------------------------------------------------------------------------------------------------------//
	cout << "---------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "dequeue" << endl;
	/* dequeue */
	deque<int> d = { 1,2,3,4 };
	d.push_back(5);
	d.push_back(6);
	d.push_front(0);
	d.push_front(-1);
	d.pop_back();
	d.pop_front();
	cout << d.front()<<endl;
	cout << d.back() << endl;
	// we can use itrator in the dequeu like that:
	auto it = d.begin();
	cout << *it << endl;
	//----------------------------------------------------------------------------------------------------------------------------------//
	cout << "---------------------------------------------------------------------------------------------------------------------------" << endl;
	/*list*/
	cout << "list" << endl;
	list<int>l{ 10,29,2012,93,4,854,54,58,688,78,8741,184};
	l.push_back(1);
	l.push_front(5);
	l.pop_back();
	l.pop_front();
	for (auto i : l) {// to see all the value in the list 
		cout << i << " ";
	}
	cout << endl;
	l.remove(5);// it means that it will remove all 5 that exist in the list
	l.unique();// remove all repeated number that next to each other and return the number 
	for (auto i : l) {// to see all the value in the list 
		cout << i << " ";
	}
	cout << endl;
	list<int>l2{ 1059,290,266,918,458,85,5494 };
	l.merge(l2);// here it will merge between two list and perferable if it sorted and return to list'l'
	list<int>l1{ 1,2,3 };
	list<int>l3{ 4,5,6 };
	l1.splice(l1.begin(), l3);// it will reverse the arrange it will appear 4,5,6, then 1,2,3
	for (auto i : l1) {// to see all the value in the list 
		cout << i << " ";
	}
	cout << endl;
	// we can use the itrator too in the list but there is sime thing different in here 
	auto it90 = l.begin();
	//cout << it90++;
	l.remove_if(isodd);
	for (auto i : l) {// to see all the value in the list 
		cout << i << " ";
	}
	cout << endl;

}
