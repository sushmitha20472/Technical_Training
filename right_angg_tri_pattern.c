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
*/
//ANOTHER METHOD
        *
	  * *
	* * *
  * * * *
* * * * *

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

