#include<stdio.h>

int sumofarr(int *x,int *y,int s)
{
	int i,sum=0;
	for(i=0;i<s;i++)
	{
		sum=sum+x[i]+y[i];
	}
	return sum;
}

int main()
{
	int n,i,j,res;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",b[j]);
	}
	res=sumofarr(a,b,n);
	printf("\n%d",res);
	return 0;
}
