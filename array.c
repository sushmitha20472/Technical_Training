#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,x,i,j,l=INT_MIN,s=INT_MAX,count,c,diff,mindiff=100,z=0;
	printf("enter n\n");
	scanf("%d",&n);
	printf("enter elements of n\n");
    int a[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("enter x\n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(l<a[i])
		{
			l = a[i];
				
		}
		if(s>a[i])
		{
			s= a[i];
		}
		while(s<=l)
		{
			count = 0;
			for(j=2;j<=sqrt(s);j++)
			{
				if(s%j == 0)
				count++;
			}
				if(count == 0)
				{
					for(i=0;i<n;i++)
					{
						if(s==a[i])
						{
							diff=abs(a[i]-x);
							if(diff<mindiff)
							{
								mindiff = diff;
								z = a[i];
							}
						}
					}
				}
				s++;
		}
		printf("\n %d",z);
		return 0;
	}
}

