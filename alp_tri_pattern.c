
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
B C
D E F
G H I J
K L M N O
