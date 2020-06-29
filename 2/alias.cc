#include <iostream>

int main()
{
	int ival = 12;
	int &ref = ival;
	int rev = ival;
	ival = 15;
	std::cout << ref << "OK" << rev << std::endl;
}
