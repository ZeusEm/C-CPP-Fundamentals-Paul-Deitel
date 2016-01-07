#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    for(int i=0; i<10; i++)
        arr[i]=0;
    for(int i=0; i<10; i++)
        cout<<(i+1)<<" -> "<<arr[i]<<endl;
    return 0;
}
