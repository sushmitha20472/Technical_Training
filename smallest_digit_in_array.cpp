#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,i,j,s=9,x,m,small;
	printf("enter n\n");
	scanf("%d",&n);
	printf("enter elements of n\n");
    int a[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		x=a[i];
		m=x%10;
		sum = m;
		x=x/10;
		if(sum<9)
		{
			small=sum;
			printf(" element that contains smallest digit is %d ",a[i]);
		}
	return 0;
		
	}
