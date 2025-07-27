#include<iostream>
using namespace std;
int square(int a)
{
	int c;
	c=a*a;
	return c;
}
int main()
{
	int i,res;
	cout<<"Enter area";
	cin>>i;
	res=square(i);
	cout<<"area is = "<<res;
	return 0;
}
