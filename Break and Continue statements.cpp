#include <iostream>

using namespace std;

int main()
{
    cout<<"What happens when you perform a normal output of a series of numbers using a loop: "<<endl;
    for(int i=0; i<=10; i++)
    cout<<i<<"\t";
    cout<<endl<<endl<<"What happens when you perform a normal output of a series of numbers using a loop with a break at 5: "<<endl;
    for(int i=0; i<=10; i++)
    {
        if(i==5)
            break;
        else
            cout<<i<<"\t";
    }
    cout<<endl<<endl<<"What happens when you perform a normal output of a series of numbers using a loop with a continue at 5: "<<endl;
    for(int i=0; i<=10; i++)
    {
        if(i==5)
            continue;
        else
            cout<<i<<"\t";
    }
    return 0;
}
