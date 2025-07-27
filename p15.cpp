#include<iostream>
using namespace std;
float triangle(int a,int b)
{
	float c;
	c=0.5*a*b;
	return c;
}
int main()
{
	int i,j;
	float res;
	cout<<"Enter breath and height";
	cin>>i>>j;
	res=triangle(i,j);
	cout<<"area is = "<<res;
	return 0;
}
