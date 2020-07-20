#include <iostream>
#include <vector>
using namespace std;
int main()
{
int* p;
vector<int> a={12};
p = &(a[0]);
std::cout << *p << std::endl;
auto find = a.begin();
a.erase(find);
std::cout << *p << std::endl;
}
