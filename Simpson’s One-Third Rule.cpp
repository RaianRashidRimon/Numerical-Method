#include<iostream>
#include<math.h>
#define e 2.71828
#define f(x) pow(e,x)
using namespace std;
int main()
{
    cout << "~~~~~ Simpson's 1/3 Rule ~~~~~" << endl;
    cout << endl;
    float lower, upper, integral=0;
    cout<<"Enter lower limit of integration: ";
    cin>>lower;
    cout<<"Enter upper limit of integration: ";
    cin>>upper;
    float c;
    c = (upper - lower);
    float x1 = (upper+lower)/2;
    integral = (c/6)*(f(lower)+4*f(x1)+f(upper));
    cout << endl;
    cout << "The area under the curve is: "<<endl;
    cout << endl;
    cout << integral << " unit" << endl;
}

