#include<stdio.h>
int main()
{
	int x,y,z,t;
	float a;
	printf("Enter your 3 sub marks x,y,z\n");
	scanf("%d%d%d",&x,&y,&z);
	t=x+y+z;
	a=(float)(t/3);
	printf("Total is %d\n",t);
	printf("avg is %f\n",a);
	
	if(a>90)
	{
		printf("A+\n");
	}
	else if(a>80)
	{
		printf("A\n");
	}
	else if(a>70)
	{
		printf("B+\n");
	}
	else if(a>60)
	{
		printf("B\n");
	}
	else if(a>50)
	{
		printf("C\n");
	}
	else if(a>40)
	{
		printf("D\n");
	}
	else if(a>35)
	{
		printf("E\n");
	}
	else if(a>0)
	{
		printf("FAIL\n");
	}
}
