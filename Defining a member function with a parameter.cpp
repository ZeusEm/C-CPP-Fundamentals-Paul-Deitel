#include <iostream>
#include <string>

using namespace std;

class a
{
   public:
    int show(string y)
    {
        cout<<endl<<endl<<"Welcome to the "<<y<<" course! We wish you speedy learning!"<<endl<<endl;
    }
} ;

int main()
{
    a b;
    cout<<"Enter your course: ";
    string z;
    getline(cin, z);
    b.show(z);
    return 0;
}
