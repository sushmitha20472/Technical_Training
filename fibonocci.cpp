#include<iostream>
using namespace std;

int fib(int n)
{
	int a=1,b=1,count,c=2;
	if(n==1 || n==2)
	return a;
	while(1)
	{
		count++;
		c=a+b;
		a=b;
		b=c;
		if(count==n)
		return c;
	}
}

int main()
{
	int n,x;
	cin>>n;
	x=fib(n);
	cout<<x;
	return 0;
	
}
