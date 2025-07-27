#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,b1,x1,x2,b2;
	cin>>a>>b>>c;
	b1=b*b;
	b2=b1-4*a*c;
	x1=(-b+(sqrt(b2)/(2*a)));
	x2=(-b-(sqrt(b2)/(2*a)));
	cout<<"root is = "<<x1<<endl;
	cout<<"root is = "<<x2<<endl;
	return 0;
}
	
	
