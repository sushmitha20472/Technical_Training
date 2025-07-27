#include<stdio.h>
int main()
{
	int n,i,j;
	char c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
        c='A';
		for(j=1;j<=i;j++)
		{
			printf("%d",c);
			c++;
		}
		printf("\n");
	}
	return 0;
}
A
A B
A B C
A B C D
A B C D E

