#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int x=0, y=0, z=0;
    do
    {
        system("cls");
        cout<<"Enter first number: ";
        cin>>x;
        cout<<endl<<"Enter second number: ";
        cin>>y;
        cout<<endl<<"So the comparisons are as following: "<<endl<<endl;
        if(x==y)
            cout<<x<<" = "<<y<<endl;
        else{}
        if(x!=y)
            cout<<x<<" != "<<y<<endl;
        else{}
        if(x<y)
            cout<<x<<" < "<<y<<endl;
        else{}
        if(x>y)
            cout<<x<<" > "<<y<<endl;
        else{}
        if(x<=y)
            cout<<x<<" <= "<<y<<endl;
        else{}
        if(x>=y)
            cout<<x<<" >= "<<y<<endl;
        else{}
        cout<<endl<<endl<<"Do you want to run again? (1 for yes, press any other key for no)."<<endl<<"Your choice: ";
        cin>>z;
    }while(z==1);
    return 0;
}
