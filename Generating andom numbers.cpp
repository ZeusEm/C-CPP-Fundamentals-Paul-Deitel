#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout<<"You're gonna be lucky today today if you get a 9 on the roll of two dice. Let's hence test our luck."<<endl<<endl;
    srand((time(0)));
    int die1=0, die2=0;
    char choice;
    do
    {
        die1 = (1+(rand()%6));
        die2 = (1+(rand()%6));
        cout<<"Rolling dice #1, you get: "<<die1<<endl;
        cout<<"Rolling dice #2, you get: "<<die2<<endl<<endl;
        cout<<"Hence the sum of the two numbers you got is: "<<(die1+die2)<<" which is ";
        if((die1+die2)==9)
            cout<<"equal to 9! YOU'RE LUCKY FOR TODAY! Go do something big!";
        else
            cout<<"not equal to 9. Alas, better luck next time.";
        cout<<endl<<endl;
        cout<<"Do you want to repeat the session? (Press Y/y for yes, any other key for no.)"<<endl;
        cout<<"Your choice: ";
        cin>>choice;
    }while(choice=='Y' || choice=='y');
    return 0;
}
