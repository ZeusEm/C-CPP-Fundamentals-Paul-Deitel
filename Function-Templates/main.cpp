#include <iostream>
#include <maximum.h>

using namespace std;

int main()
{
    cout<<"Enter three integers."<<endl<<"Number #1: ";
    int a1, b1, c1;
    cin>>a1;
    cout<<endl<<"Number #2: ";
    cin>>b1;
    cout<<endl<<"Number #3: ";
    cin>>c1;
    cout<<"So the biggest number of all three entered is: "<<maximum(a1, b1, c1);
    cout<<endl<<endl<<"Enter three real numbers."<<endl<<"Number #1: ";
    float a2, b2, c2;
    cin>>a2;
    cout<<endl<<"Number #2: ";
    cin>>b2;
    cout<<endl<<"Number #3: ";
    cin>>c2;
    cout<<"So the biggest number of all three entered is: "<<maximum(a2, b2, c2);
    cout<<endl<<endl<<"Enter three characters."<<endl<<"Character #1: ";
    char a3, b3, c3;
    cin>>a3;
    cout<<endl<<"Character #2: ";
    cin>>b3;
    cout<<endl<<"Character #3: ";
    cin>>c3;
    cout<<endl<<endl<<"So the biggest number of all three entered is: "<<maximum(a3, b3, c3);
    return 0;
}
