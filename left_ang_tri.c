/*
#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(j <= n-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
//ANOTHER METHOD
#include<stdio.h>
int main()
{
    int n, i, j,k;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j < n; j++)
        {
                printf(" ");
        }
        for(k=1;k<=i;k++)
        {
        	printf("*");
		}
        printf("\n");
    }
    return 0;
}
        *
	  * *
	* * *
  * * * *
* * * * *

/*
#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(j <= n - (i-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
* * * * *
* * * *
* * *
* * 
*



#include<stdio.h>
int main()
{
    int n, i, j,k;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {   
        for(k=1;k<=i;k++)
        {
        	printf("*");
		}
        for(j = 1; j < n; j++)
        {
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
* * * * *
  * * * *
	* * *
	  * *
        *

#include<stdio.h>
int main()
{
	int n,i,j,m=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",m);
			m++;
		}
		printf("\n");
	}
	return 0;
}
1 
2 3 
4 5 6
7 8 9 10

#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
1
1 2 
1 2 3
1 2 3 4
1 2 3 4 5


#include<stdio.h>
int main()
{
	int n,i,j;
	char c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
        c='A';
		for(j=1;j<=i;j++)
		{
			printf("%d",c);
			c++;
		}
		printf("\n");
	}
	return 0;
}
A
B C
D E F
G H I J
K L M N O

#include<stdio.h>
int main()
{
	int n,i,j;
	char c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
        c='A';
		for(j=1;j<=i;j++)
		{
			printf("%d",c);
			c++;
		}
		printf("\n");
	}
	return 0;
}
A
A B
A B C
A B C D
A B C D E

*/

#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i ==1 || i==n)
		{
			for(j=1;j<=n;j++)
			{
				printf("* ");
			}
	    }
	    else
	    {
	    	for(j=1;j<=n;j++)
			{
				if(i== 1 || j==n)
				{
				printf("* ");
			    }
			    else
			    {
			    	printf("  ");
				}
	        }
	    }
		printf("\n");
	}
	return 0;
}




	
