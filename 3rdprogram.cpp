#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, r;
    cout<<"Enter first double valuer: ";
    cin>>a;
    cout<<"Enter 2econd double value: ";
    cin>>b;
    r = fmod(a,b);
    cout<<"The result of fmod()= "<<r;
    return 0;
}
