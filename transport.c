#include<stdio.h>
int main()
{
	int n,i,j,flag;
	printf("enter n\n");
	scanf("%d",&n);
	printf("Enter elements ");
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			    if(a[i][j] != a[j][i])
				flag =1;  
		}
		printf("\n");
    }
    if(flag == 0)
    {
    	printf("symmetric\n");
	}
	else
	printf("not");


	return 0;
}
