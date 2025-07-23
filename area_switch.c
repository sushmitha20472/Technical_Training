#include<stdio.h>
int main()
{
	float a,b,c;
	int n;
	printf("Choose any of the following options\n");
	printf("1.Area of square\n2.Area of Recatangle\n3.Area of Circle\n4.Area of Triangle\n");
	printf("Enter your choice\n");
	scanf("%d",&n);
	
	switch(n)
		{
			case 1:
				printf("Input lenght to calculate\n");
				scanf("%f",&a);
				c=a*a;
				printf("area of square answer is %f\n",c);
				break;
			case 2:
				printf("Input  base and height to calculate\n");
				scanf("%f%f",&a,&b);
				c=a*b;
				printf("area of square answer is %f\n",c);
				break;
			case 3:
				printf("Input radius to calculate\n");
				scanf("%f",&a);
				c=3.14*a*a;
				printf("area of square answer is %f\n",c);
				break;
			case 4:
				printf("Input base and height numbers to calculate\n");
				scanf("%f%f",&a,&b);
				c=0.5*a*b;
				printf("area of square answer is %f\n",c);
				break;
			default:
				printf("INVALID\n");
				break;
		}
}
