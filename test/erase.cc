#include <iostream>
#include <vector>

int main()
{
	using namespace std;

	vector<int> is = {1,2,1,4,1,6,1,8,1,10};
	for (auto find = is.begin(); find != is.end(); ++find)
	{
		if (*find == 1)
		{
			is.erase(find);
			break;
		}
	}
	for (int i : is)
		cout << i << endl;
}
