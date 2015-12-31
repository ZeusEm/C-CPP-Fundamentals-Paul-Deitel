#include <iostream>

using namespace std;

int main()
{
    cout<<"Producing natural numbers from 1 to 10 iteratively incrementing them one by one: "<<endl<<endl;
    int i=1;
    do
    {
        cout<<i<<"\t";
        ++i;
    }while(i<=10);
    return 0;
}
