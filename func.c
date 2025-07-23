#include<stdio.h>

int add(int a, int b)
{
	int c = a+b;
	return c;
}


int sub(int a, int b)
{
	int c=a-b;
	return c;
}


int mul(int a,int b)
{
	int c = a*b;
	return c;
}


float div(float a,float b)
{
	float c=a/b;
	return c;
}

int even(int i)
{
	if(i%2 == 0)
	{
		printf("It is even num\n");
	}
	else
	{
		printf("odd\n");
	}
	return 0;
}


int prime(int n)
{
	int i,count=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i == 0)
		count ++;
	}
	if(count == 0)
	{
		printf("prime\n");
	}
	else
	{
		printf("not prime\n");
	}
	return 0;
}


int main()
{
	int p,q,x,y,z,n;
	float w;
	scanf("%d%d",&p,&q);
	printf("enter n");
	scanf("%d",&n);
	even(n);
	prime(n);
	x = add(p,q);
	y=sub(p,q);
	z=mul(p,q);
	w = div(p,q);
	printf("\naddition is %d",x);
	printf("\nsubstraction is %d",y);
	printf("\nmul is %d",z);
	printf("\ndiv is %f",w);
	
}
