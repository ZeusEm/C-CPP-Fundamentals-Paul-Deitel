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
    cout<<endl<<"Please enter marks of the students in the class (enter -1 to exit): "<<endl<<endl;
    int i=0, marks=0;
    float total=0.0, average=0.0;
    while(1)
    {
        cout<<"Enter marks for student #"<<(i+1)<<": ";
        cin>>marks;
        if(marks!=(-1))
        {
            total += marks;
            i++;
        }
        else
            break;
    }
    average=total/i;
    cout<<endl<<endl<<"Hence the class average for a class of "<<i<<" students in the subject "<<a<<" is "<<average;
    return 0;
}
