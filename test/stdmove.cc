#include <utility>
#include <iostream>

int main()
{
	int i = 33;
	int j = std::move(i);
	std::cout << i << std::endl;;
}
