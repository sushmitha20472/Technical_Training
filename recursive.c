#include<stdio.h>
int sumofeven(int n,int s)
{

	if(n==0)
	return s;
	else
	{
		if(n%2==0)
		{
			s=s+n;

		}
			sumofeven(n-1,s);
		
}
}

int main()
{
	int n,sum=0;
	scanf("%d",&n);
	sum=sumofeven(n,sum);
	printf("%d",sum);
	return 0;
}
