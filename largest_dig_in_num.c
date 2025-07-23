#include<stdio.h>
int main()
{
	int n,m,sum,l=0;
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		sum = m;
		n=n/10;
	if(sum>l)
	{
		l=sum;
		
	}
	
}
printf("\nlargest digit is %d\n",l);

	return 0;
}
