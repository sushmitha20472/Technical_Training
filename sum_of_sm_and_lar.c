#include<stdio.h>
int main()
{
	int n,m,sum,l=0,s=9,sum1=0;
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		sum = m;
		
	if(sum>l)
	{
		l=sum;
		
	}
 	if(sum<s)
	{
	    s=sum;	
	}
	n=n/10;
	}
	printf("\nlargest digit is %d\n",l);
	printf("smallest digit is %d",s);
	sum1=s+l;
	printf("\nsum of l and s is %d",sum1);

	return 0;
}
