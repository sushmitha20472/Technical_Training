#include<stdio.h>
int main()
{
	int n,k,x,y,z,i,j,temp;
	printf("enter n number\n");
	scanf("%d",&n);
	int a[n];
	printf("enter n array elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    printf("Enter k\n");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
    }
    x = a[(k-1)];
    y = a[(n-k)];
    printf("\nthe smallest kth element is %d\n",x);
    printf("the largest kth element is %d\n",y);
    z= x*y;
    printf("the product of the %d and %d is %d\n",x,y,z);
    return 0;
}
