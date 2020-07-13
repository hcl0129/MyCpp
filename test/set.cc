#include <set>
#include <iostream>

int main()
{
	using namespace std;

	set<int> theset;	
	theset.insert(3);

	theset.insert(2);

	theset.insert(1);

	theset.clear();

	cout << theset.size() << endl;
}
