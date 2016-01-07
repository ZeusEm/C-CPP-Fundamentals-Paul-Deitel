#include <iostream>

using namespace std;

int x=10;

int useLocal()
{
    int x=40;
    cout<<"Value of x here (coming from the locally declared x in another function) is: "<<x<<endl;
    ++x;
    cout<<"Incrementing x and exiting the function, the value of x we have: "<<x<<endl<<endl;
    return 0;
}

int useStaticLocal()
{
    static int x=50;
    cout<<"Value of x here (coming from locally declared static x in another function) is: "<<x<<endl;
    ++x;
    cout<<"Incrementing x and exiting the function, the value of x we have: "<<x<<endl<<endl;
    return 0;
}

int useGlobal()
{
    cout<<"Value of x here (coming from the globally declared x) is: "<<x<<endl<<endl;
    ++x;
    cout<<"Incrementing x and exiting the function, the value of x we have: "<<x<<endl<<endl;
    return 0;
}

int main()
{
    cout<<"Value of x here (coming from global x) is: "<<x<<endl<<endl;
    int x=20;
    cout<<"Value of x here (coming from local x) is: "<<x<<endl<<endl;
    {
        int x=30;
        cout<<"Value of x here (coming from local in-blocked x) is: "<<x<<endl<<endl;
    }
    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();

    return 0;
}
