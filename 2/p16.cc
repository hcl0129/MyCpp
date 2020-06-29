#include <iostream>

int main()
{
	int i = 0, &r1 = i;
	r1 = 12.12;
	std::cout << i << std::endl;
}
