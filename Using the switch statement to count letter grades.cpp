#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the grades obtained below between A-F. Enter Z/z to stop the process."<<endl<<endl;
    char grade;
    int i=0, a=0, b=0, c=0, d=0, e=0, f=0;
    do
    {
        cout<<"Enter grade #"<<(i+1)<<": ";
        cin>>grade;
        if(grade=='z' || grade=='Z')
            break;
        switch(grade)
        {
            case 'A': ++a; ++i; break;
            case 'a': ++a; ++i; break;
            case 'B': ++b; ++i; break;
            case 'b': ++b; ++i; break;
            case 'C': ++c; ++i; break;
            case 'c': ++c; ++i; break;
            case 'D': ++d; ++i; break;
            case 'd': ++d; ++i; break;
            case 'E': ++e; ++i; break;
            case 'e': ++e; ++i; break;
            case 'F': ++f; ++i; break;
            case 'f': ++f; ++i; break;
            default: cout<<endl<<"Wrong grade entered (Grade needs to be between A-F). Enter again."; continue;
        }
    }while(grade!='Z' || grade!='z');
    cout<<endl<<endl<<"Hence the grade distribution of the class is: "<<endl;
    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;
    cout<<"C: "<<c<<endl;
    cout<<"D: "<<d<<endl;
    cout<<"E: "<<e<<endl;
    cout<<"F: "<<f<<endl;
    return 0;
}
