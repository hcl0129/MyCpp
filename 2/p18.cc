#include <iostream>

int main()
{
	int i = 5, *pi = &i;
	//pi = 12;
	*pi = 10;
	std::cout << *pi << std::endl;
	std::cout << i << std::endl;
	i = 30;
	std::cout << *pi << std::endl;
}
