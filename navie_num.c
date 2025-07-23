#include<stdio.h>
int main()
{
	int n,m,sum;
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		sum = sum+m;
		n=n/10;
	}
	printf("%d",sum);
	if(n%sum == 0)
	{
		printf("\nIt is a navie number\n");
	}
	else
	{
		printf("nota navie\n");
	}
	return 0;
}
