#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    system("cls");
    cout<<"Enter the course for which you would like to calculate class average: ";
    string a;
    getline(cin, a);
    cout<<endl<<"Enter the number of students in the class (enter 0 to exit): ";
    int b=0;
    cin>>b;
    int i=0, marks=0;
    float total=0.0, average=0.0;
    if(b==0)
        return 0;
    else
        for(; i<b; i++)
        {
            cout<<"Enter marks for student #"<<(i+1)<<": ";
            cin>>marks;
            total += marks;
            average=(total/(i+1));
        }
    cout<<endl<<endl<<"Hence the class average for a class of "<<i<<" students in the subject "<<a<<" is "<<average;
    return 0;
}
