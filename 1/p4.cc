#include <iostream>

int main()
{
    int v1, v2;

    std::cout << "Enter two numbers from small to large: " << std::endl;
    std::cin >> v1 >> v2;
    
    for ( ; v1 <= v2; v1++)
        std::cout << v1 << std::endl;

}

