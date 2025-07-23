#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n1,n2,i,j;
	printf("enter n1\n");
	scanf("%d",&n1);
	printf("enter a");
	int a[n1];
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter n2\n");
	scanf("%d",&n2);
	printf("enter b");
	int b[n2];
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d",a[i]);
			}
		}
	}
	return 0;
}
