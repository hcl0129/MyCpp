#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> retval = 
	{
		{ 1 },
        { 1, 2, 3 },
        { 1, 2, 3, 5 },
        { 1, 2, 3, 5, 10, 20, 30, 50, 100, 120, 130, 150, 200, 220, 230, 250, 300 },
        { }	
	};

	for(int instrumentId = 1; instrumentId <= 203; ++instrumentId)
    {
        retval.back().push_back(instrumentId);
    }

	
}

