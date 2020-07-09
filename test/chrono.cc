#include <chrono>
#include <iostream>

int main()
{
	std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(mClock.now().time_since_epoch()).count() << std::endl;
}
