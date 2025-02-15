#include<iostream>
#include<math.h>
#define f(x) x*x*x+1
using namespace std;
int main()
{
    cout << "~~~~~ Trapezoidal Rule ~~~~~" << endl;
    cout << endl;
    float lower, upper, integral=0;
    cout<<"Enter lower limit of integration: ";
    cin>>lower;
    cout<<"Enter upper limit of integration: ";
    cin>>upper;
    float c;
    c = (upper - lower);
    integral = c*((f(lower)+f(upper))/2);
    cout << endl;
    cout << "The area under the curve is: "<<endl;
    cout << endl;
    cout << integral << " unit" << endl;
}
