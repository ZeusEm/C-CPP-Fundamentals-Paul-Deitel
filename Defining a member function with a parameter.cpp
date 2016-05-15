#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class a
{
public:
	void show(string y)
	{
		cout << endl << endl << "Welcome to the " << y << " course! We wish you speedy learning!" << endl << endl;
	}
};

int main()
{
	a b;
	cout << "Enter your course: ";
	string z;
	getline(cin, z);
	b.show(z);
	getch();
	return 0;
}
