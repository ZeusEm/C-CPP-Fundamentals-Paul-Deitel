#include <iostream>
#include <string>

using namespace std;

class c
{
    public:
    c(string f)
    {
        cout<<endl<<"Grade book created for subject "<<f<<"! Congratulations!"<<endl;
    }
};

int main()
{
    string a, b;
    int choice=0;
    do
    {
        cout<<"Enter the first subject: ";
        getline(cin, a);
        cout<<endl<<"Enter the second subject: ";
        getline(cin, b);
        c d(a);
        c e(b);
        cout<<endl<<endl<<"Do you want to repeat this? (Enter 1 for yes, press any other key to exit.)"<<endl<<"Your choice: ";
        cin>>choice;
    }while(choice==1);
    return 0;
}
