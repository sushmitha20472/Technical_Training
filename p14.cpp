#include<iostream>
using namespace std;
float circle(int a)
{
	float c;
	c=(float)3.14*a*a;
	return c;
}
int main()
{
	int i;
	float res;
	cout<<"Enter area";
	cin>>i;
	res=circle(i);
	cout<<"area is = "<<res;
	return 0;
}
