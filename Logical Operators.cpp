#include <iostream>

using namespace std;

int main()
{
    cout<<"See the logical operators working below."<<endl<<endl;
    cout<<"false: 0"<<endl<<"true: 1"<<endl<<endl;
    cout<<"Logical AND(&&)"<<endl;
    cout<<"false && false: "<<(0 && 0)<<endl;
    cout<<"false && true: "<<(0 && 1)<<endl;
    cout<<"true && false: "<<(1 && 0)<<endl;
    cout<<"true && true: "<<(1 && 1)<<endl<<endl;
    cout<<"Logical OR(||)"<<endl;
    cout<<"false || false: "<<(0 || 0)<<endl;
    cout<<"false || true: "<<(0 || 1)<<endl;
    cout<<"true || false: "<<(1 || 0)<<endl;
    cout<<"true || true: "<<(1 || 1)<<endl<<endl;
    cout<<"Logical NOT(!)"<<endl;
    cout<<"!false: "<<(!0)<<endl;
    cout<<"!true: "<<(!1)<<endl<<endl;
    return 0;
}
