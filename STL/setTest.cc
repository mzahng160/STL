#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int, greater<int>> IntSet;
	//set<int, less<int>> IntSet;
	//set<int> IntSet;

	IntSet.insert(343);
	IntSet.insert(2);
	IntSet.insert(321);
	IntSet.insert(102);

	for(set<int>::iterator it = IntSet.begin(); it != IntSet.end();++it)
		cout << *it << endl;
	
}
