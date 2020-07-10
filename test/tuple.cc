#include <iostream>
#include <string>
#include <vector>
#include <tuple>

int main ()
{
	using namespace std;
	vector<tuple<string, string, string>> vec = 
	{
		{"1h", "2h", "3h"},
		{"4h", "5h", "6h"}
	};

	tuple<string, string> tup = {"123", "12321"};

	cout << get<1>(vec[0]) << endl;
}
