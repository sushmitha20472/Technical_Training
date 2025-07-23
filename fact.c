#include<stdio.h>
int fac(int n)
{

	if(n==1)
	return 1;
	else
	return n*fac(n-1);
}

int main()
{
	int n,f;
	scanf("%d",&n);
	f=fac(n);
	printf("%d",f);
	return 0;
}
