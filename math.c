#include<stdio.h>
#include<math.h>
int main()
{
	/*
	printf("%f",ceil(4.0));
	printf("\n %f",floor(4.9));	
	printf("\n %f",fabs(-20.25));//floor absolute
	printf("\n %f",abs(-20.25));
	printf("\n %f",sqrt(-25)); //cannot calculate sqrt of - value
	printf("\n %f",pow(3,2));
	printf("\n %f",log(2));
	printf("\n %f",log10(2));
	printf("\n %f",exp(2));
	printf("\n %f",sin(30));
	printf("\n %f",cos(30));
	printf("\n %f",tan(30));
	printf("\n %f",round(4.2));

	float a;
	printf("Enter a positive integer or a decimal number\n");
	scanf("%f",&a);
	printf("the square root of the %f is %f",a,sqrt(a));

	float x = 5,y=3,z;
	z = sqrt(x)+pow(x,y);
	printf("%f",z);
	*/	
	float x = 5,y=3,z;
	z = (log(x)+log10(x)+exp(x))/sqrt(y);
	printf("%f\n",z);
	return 0;
	}
