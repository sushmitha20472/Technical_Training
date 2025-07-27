#include<stdio.h>
void func(int x)
{
	x=100;
}
int x=50;
int  main()
{
	
	func(x);
	printf("%d",x);
	return 0;
}
