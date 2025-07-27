#include<iostream>
using namespace std;
int rectangle(int a,int b)
{
	int c;
	c=a*b;
	return c;
}
int main()
{
	int i,j,res;
	cout<<"Enter length and breath";
	cin>>i>>j;
	res=rectangle(i,j);
	cout<<"area is = "<<res;
	return 0;
}
