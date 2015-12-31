#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the principal amount: ";
    float p;
    cin>>p;
    cout<<"Enter the rate of interest: ";
    float r;
    cin>>r;
    cout<<"Enter the time period (in years) involved: ";
    int t;
    cin>>t;
    cout<<endl<<endl<<"The amounts accumulated for the mentioned number of years is as following:"<<endl<<endl;
    float interest;
    for(int i=0; i<t; i++)
    {
        cout<<endl<<"Year #"<<(i+1);
        cout<<endl<<"Interest accumulated: ";
        interest = ((p*r)/100);
        cout<<interest;
        cout<<endl<<"Total Amount: "<<(p+interest)<<endl;
        p+=interest;
    }
    return 0;
}
