//WHILE LOOP
/*
#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	while(n<m)
	{
		if(n%2==0)
		{
		
		printf("%d\t",n);
	}
	n++;
	}
	return 0;
}

//FOR LOOP
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("HELLOO\n");
	}
	return 0;
}
//DO WHILE
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	do
	{
		printf("HELLOO");
		i++;
	}
	while(i<n);
	
	return 0;
}

#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	while(n<=m)
	{
		printf("%d\t",m);
	m--;
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int n,m,sum;
	scanf("%d%d",&n,&m);
	while(n<=m)
	{
		if(n%2==0)
		{
				
		sum=sum+n;
	    }
		n++;
		
    } 
		printf("%d\t",sum);
	
	return 0;
}

//IMPORTANT : HOW TO ADD THE DIGITS IN THE NUM
#include<stdio.h>
int main()
{
	int n,m,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;		
    } 
		printf("%d\t",sum);

	return 0;
}

//TO FIND IF A NUM IS PALENDROME OR NOT!0
#include<stdio.h>
int main()
{
	int n,m,sum=0,s;
	scanf("%d",&n);
	s=n;
	while(n>0)
	{
		m=n%10;
		sum=sum*10+m;
		n=n/10;	
    } 
    		if(sum == s)
		{
			printf("PALENDROME\n");
		}	
		else
		{
			printf("not a palendrome\n");
		}
		printf("%d\t",sum);

	return 0;
}
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,d=0,sum=0,r,x,y;
	scanf("%d",&n);
	x=n;
	y=n;
	while(n>0)
	{
		d++;
		n=n/10;	
    } 
    while(x>0)
    {
    	r=x%10;
    	sum = sum+pow(r,d);
    	x=x/10;
	}
	if(y==sum)
	{
		printf("Armstrong\n");
	}
	else
	{
		printf("Not\n");
	}

	return 0;
}


