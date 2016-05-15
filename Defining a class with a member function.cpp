#include <iostream>
#include <conio.h>

using namespace std;

class a
{
public:
	void show()
	{
		cout << "Hello World!";
	}
};

int main()
{
	system("cls");
	a b;
	b.show();
	getch();
	return 0;
}
