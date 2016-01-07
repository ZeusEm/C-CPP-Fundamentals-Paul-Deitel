#include <iostream>
#include <math.h>

using namespace std;

void pass(int c, int &d)
{
    c=pow(c,2);
    d=pow(d,2);
}

int main()
{
    cout<<"Please enter the number to be passed by value: ";
    int a;
    cin>>a;
    cout<<endl<<"Please enter the number to be passed by reference: ";
    int b;
    cin>>b;
    pass(a,b);
    cout<<endl<<endl<<"Hence the two numbers after passing to another function where they were squared are "<<a<<" and "<<b<<endl<<endl;
    return 0;
}
