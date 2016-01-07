#include <iostream>
#include <math.h>

using namespace std;

int calcSquare(int number)
{
    return pow(number, 2);
}

float calcSquare(float number)
{
    return pow(number, 2);
}

int main()
{
    int num1=0;
    char choice;
    float num2=0.0;
    do
    {
        cout<<"Press 1 to enter an integer, 2 to enter a real number, press any other key to exit."<<endl;
        cout<<"Your choice: ";
        cin>>choice;
        if(choice == '1')
        {
            cout<<endl<<endl<<"Please enter an integer: ";
            cin>>num1;
            cout<<endl<<"So the square of the number entered is: "<<calcSquare(num1)<<endl<<endl;
        }
        else if(choice == '2')
        {
            cout<<endl<<endl<<"Please enter a real number: ";
            cin>>num2;
            cout<<endl<<"So the square of the number entered is: "<<calcSquare(num2)<<endl<<endl;
        }
        else
            cout<<"Please enter a correct choice."<<endl<<endl;
        cout<<"Do you want to run again? (Press Y/y for yes, press any other key for no."<<endl<<"Your choice: ";
        cin>>choice;
    }while(choice == 'Y' || choice == 'y');
    return 0;
}
