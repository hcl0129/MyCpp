#include <iostream>
#include <stdio.h>

using namespace std;

void foo(int len) noexcept
{
	cout << "start" << endl;
	int p = 3/len;
	cout << "end" << endl;
}

int main()
{
	int i;
	cout << "start" << endl;
	scanf("%d", &i);
	foo(i);	
	cout << "end" << endl;
}
