#include <iostream>

using namespace std;

class Base
{
	public:
	Base() {};
	virtual ~Base() {cout << "Delete Base" << endl;};
};

class Derived : public Base
{
	public:
	Derived() {};
	~Derived() {cout << "Delete Drived" << endl;}
};

int main()
{
	Base* p = new Derived;
	delete p;
	return 0;
}
