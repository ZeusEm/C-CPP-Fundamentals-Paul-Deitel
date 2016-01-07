#include <iostream>

using namespace std;

int number=5;

int main()
{
    double number=7;
    cout<<"The global integer's value is "<<::number<<" while the local integer's value is "<<number<<endl;
    return 0;
}
