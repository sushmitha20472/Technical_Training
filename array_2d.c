#include<stdio.h>
int main()
{
	int n,i,j,sum=0;
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
		for(j=0;j<n;j++) //if j>=i ,we get upper triangular part //if j<=i lower triangular
		{
			if(i==j)
			{ //for printing diagonal elements
			sum = sum+  //We can also write diagonal using only one for loop ,printing a[i][i];
		    }
		    if(j == (n-j-1))
			printf("%d\t",a[i][n-i-1]);
			sum = a[i][n-i-1]+a[i][i];

		//}
		printf("\n");


	}
	printf("%d",sum);

	return 0;
}
