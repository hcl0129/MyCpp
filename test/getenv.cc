#include <iostream>
#include <string>

using namespace std;

int main()
{
	char* homeDir = getenv("HOME");
	cout << homeDir << endl;
	
	int i = 0;
	while (homeDir[i] != '\0')
	{
		cout << homeDir[i++] << endl;
	}
}
