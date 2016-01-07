#include <iostream>

using namespace std;

inline int calcSum()
{
    int sum=0;
    for (int i=1; i<=10; i++)
        sum+=i;
    cout<<sum;
    return 0;
}

int main()
{
    cout<<"Sum of the first ten natural numbers: "<<endl<<endl;
    calcSum();
    return 0;
}
