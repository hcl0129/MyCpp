#include <iostream>
#include <set>
#include <vector>

int main()
{
	using namespace std;

	set<int> seta;
	seta.insert(12);
	seta.insert(13);
	seta.insert(1);

	set<int>::iterator it;
	for (it = seta.begin(); it != seta.end(); it++)
	{
		cout << *it << endl;
	}

	cout << *(--it) << endl;

	vector<int> a = {1,2,3};
	vector<int> b = {1,2,3};	

	bool pp = a==b;
	cout << pp << endl;	
}
