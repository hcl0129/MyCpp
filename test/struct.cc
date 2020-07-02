#include <iostream>

int main()
{
	using namespace std;

	struct product
	{
		int weight;
		double price;
	};

	product apple;
	//apple.weight = 3;
	cout << apple.weight << endl;

	product* pbanana;
	product banana = {1,2.22};
	pbanana = &banana;
	cout << (*pbanana).price << endl;
	(*pbanana).price = 2;
	cout << (*pbanana).price << endl;
	pbanana -> price = 6;
	cout << pbanana -> price << endl;
}
