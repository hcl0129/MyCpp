#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, sum, newitem;

    std::cin >> item;
    sum = item;

    while (std::cin >> newitem) {
        if (newitem.isbn() == item.isbn()) 
            sum += newitem;
        else {
            std::cout << sum << std::endl;
            item = newitem;
            sum = newitem;
        }
    }

    std::cout << sum << std::endl;
    std::cerr << "Finished?" << std::endl;
    return 0;
}
