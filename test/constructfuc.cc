#include <iostream>

using namespace std;

class Line
{
	public:
		void setLength(double len);
		double getLength(void);
		Line(double len) // Excuted after a new object created
		{
			cout << "created " << len << endl;
		};
		~Line();

	private:
		double length;
};

/*
Line::Line(void)
{
	cout << "Created" << endl;
}
*/

Line::~Line(void)
{
	cout << "Deleted" << endl;
}

void Line::setLength(double len)
{
	length = len;	
}

double Line::getLength(void)
{
	return length;	
}

int main()
{
	Line line(10.0);

	cout << "Start" << endl;
	line.setLength(6.0);
	cout << "Length of line: " << line.getLength() << endl;

	return 0;
}
