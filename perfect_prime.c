#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,i,j,count=0,sum1=0,sum=0,s,m,m1,p,flag;
	printf("enter n\n");
	scanf("%d",&n);
	for(j=2;j<=sqrt(s);j++)
		{
			if(s%j == 0)
			count++;
		}
	if(count == 0)
		{
			p=n;
			while(n>0)
			{	
				m=n%10;
				sum=sum+m;
				n=n/10;
			}
			count=0;
			for(j=2;j<=sqrt(sum);j++)
			{
				if(sum%j == 0)
				count++;
			}
			if(count == 0)
			{
				while(p>0)
				{
					m1=p%10;
					if(!(m1 == 2 || m1 == 3 || m1 == 5 || m1 == 7))
					flag=1;
					p=p/10;
				}
				if(flag==0)
				{
					printf("perfect prime\n");
				}
				else
				{
					printf("not perfect\n");	
				}	
			}
			else
			{
				printf("not perfect prime\n");
			}
		}
	else
	{
		printf("not a prime number\n");
	}
	
	
return 0;
}

