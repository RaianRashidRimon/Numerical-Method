#include<iostream>
#include<iomanip>
#include<math.h>
#define f(x) x*x-x-2
using namespace std;
int main()
{
	 float x0, x1, x, f0, f1, f, e;
	 int step = 1;
	 cout<<"Enter first guess: ";
     cin>>x0;
     cout<<"Enter second guess: ";
     cin>>x1;
     cout<<"Enter tolerable error: ";
     cin>>e;
	 f0 = f(x0);
	 f1 = f(x1);
     cout<< endl<<"*********************"<< endl;
	 cout<<"False Position Method"<< endl;
	 cout<<"*********************"<< endl;
	 do{
		  x = x0 - (x0-x1) * f0/ (f0-f1);
		  f = f(x);
		  cout<<"Iteration-"<< step<<":\t x = "<< setw(10)<< x<<" and f(x) = "<< setw(10)<< f(x)<< endl;
		  if( f0 * f < 0){
			   x1 = x;
			   f1 = f;}
		  else{
			   x0 = x;
			   f0 = f;}
		  step = step + 1;
	 }while(fabs(f)>e);
	 cout<< endl<<"Root is: "<< x<< endl;
	 return 0;
}
