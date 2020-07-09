#include <iostream>
#include <vector>
#include <string>

int main()
{
	using namespace std;

	vector<string> vec = {"weasd", "wqq", "22"};
	cout << vec[1] << endl;

	string* p;
	for(int i = 0; i < vec.size(); i++ )
	{
		p = &vec[i];
		cout << *p << endl;
	}
	cout << vec.back() << endl;
	vector<int> a;
	cout << a.size() << endl;
}
