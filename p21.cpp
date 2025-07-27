#include<iostream>
#include<math.h>
using namespace std;
float equation(float a,float b)
{
	float p,q,r,out;
	p=exp(a);
	q=sqrt(b);
	r=pow(a,b);
	out = ((log10(p)+log(q))/(sin(a)+p+r));
	return out;
}
int main()
{
	float x,y;
	float res;
	cout<<"enter x and y";
	cin>>x>>y;
	res=equation(x,y);
	cout<<"res= "<<res;
	return 0;
}
