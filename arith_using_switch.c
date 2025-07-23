#include<stdio.h>
int main()
{
	float a,b,c;
	int n;
	printf("Select 2 numbers to calculate\n");
	scanf("%d%d",&a,&b);
	printf("Choose any of the following options\n");
	printf("1.Additin\n2.Substraction\n3.Multiplication\n4.Division\n");
	printf("Enter your choice\n");
	scanf("%d",&n);
	switch(n)
		{
			case 1:
				c=a+b;
				printf("Addition answer is %f\n",c);
				break;
			case 2:
				c=a-b;
				printf("Substraction answer is %f\n",c);
				break;
			case 3:
				c=a*b;
				printf("Multiplication answer is %f\n",c);
				break;
			case 4:
				c=a/b;
				printf("Division answer is %f\n",c);
				break;
			default:
				printf("INVALID\n");
				break;
		}
}
