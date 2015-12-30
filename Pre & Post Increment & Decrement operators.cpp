#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter a number: ";
    int a;
    cin>>a;
    cout<<endl<<endl<<"Original Number: "<<a;
    cout<<endl<<"Apply Post Increment: "<<a++;
    cout<<endl<<"Apply Pre Increment: "<<++a;
    cout<<endl<<"Apply Post Decrement: "<<a--;
    cout<<endl<<"Apply Pre Decrement: "<<--a;
    cout<<endl<<"Resultant number: "<<a;
    return 0;
}
