	//CHECKING STUDENT RESULT
#include<stdio.h>
int main()
{
	int m,p,c,total;
	float avg;
	printf("Enter your marks m,n,c\n");
	scanf("%d%d%d",&m,&p,&c);
	if(m>35)
	{
		if(p>35)
		{
			if(c>35)
			{
				printf("you are pass\n");
				total = m+p+c;
				avg = (float)(total/3);
				printf("Your total marks is %d\n",total);
				printf("your avg is %f",avg);
			}
			else
			{
				printf("FAIL\n");
			}
		}
		else
		{
			printf("you are failed in c\n");
		}
	}
	else
	{
		printf("failed in maths");
	}

	return 0;
}	
	
	

