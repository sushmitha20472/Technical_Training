#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,s,l,f,i;
	float b;
	printf("enter the size\n");
	scanf("%d",&n);
	printf("enter elements\n");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s =a[i];
		b=sqrt(s);
		l=(int)b;
		f=l*l;
		if(f == s)
		{
			printf("%d",f);
		}
		
		
	
	}
	return 0;
}
