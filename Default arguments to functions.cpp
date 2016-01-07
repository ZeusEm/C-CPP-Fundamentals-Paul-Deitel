#include <iostream>

using namespace std;

int calcVol(int d=1, int e=1, int f=1)
{
    int g=d*e*f;
    return g;
}

int main()
{
    int sides=0, a=0, b=0, c=0;
    char choice;
    do
    {
        cout<<"Please enter the lengths of the sides (in whole numbers) to compute the volume of a cuboid. The default side dimension is 1."<<endl<<endl;
        cout<<"To evaluate the volume of a cuboid, how many dimensions do you want to enter: ";
        cin>>sides;
        switch(sides)
        {
            case 1: cout<<"Side #1: ";
                    cin>>a;
                    cout<<endl<<endl<<"So the volume of the cuboid as per the side dimensions entered (or defaulted) is: "<<calcVol(a);
                    break;
            case 2: cout<<"Side #1: ";
                    cin>>a;
                    cout<<endl<<"Side #2: ";
                    cin>>b;
                    cout<<endl<<endl<<"So the volume of the cuboid as per the side dimensions entered (or defaulted) is: "<<calcVol(a, b);
                    break;
            case 3: cout<<"Side #1: ";
                    cin>>a;
                    cout<<endl<<"Side #2: ";
                    cin>>b;
                    cout<<endl<<"Side #3: ";
                    cin>>c;
                    cout<<endl<<endl<<"So the volume of the cuboid as per the side dimensions entered (or defaulted) is: "<<calcVol(a, b, c);
                    break;
            default: cout<<"Please enter the correct input (1, 2 or 3)";
        }
        cout<<endl<<endl<<"Do you want to repeat? (Press Y/y to repeat, press any other key to exit.)"<<endl<<"Choice: ";
        cin>>choice;
    }while(choice=='Y' || choice=='y');
    return 0;
}
