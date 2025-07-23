#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,i,j,s=9,x,m,small,sum=0,z=0;
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
		while(x>0)
	    {	
		m=x%10;
		x=x/10;
	    if(m<s)
		{
			small=m;
			z=a[i];
		}
    }
}
printf("%d",z);

	return 0;
		
	}
