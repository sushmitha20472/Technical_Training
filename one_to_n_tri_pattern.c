


#include<stdio.h>
int main()
{
	int n,i,j,m=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",m);
			m++;
		}
		printf("\n");
	}
	return 0;
}
1 
2 3 
4 5 6
7 8 9 10
