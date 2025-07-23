#include<stdio.h>

int main()
{
	//DATATYPES
/*	int a = 10;
	char c = 'a';
	float d= 9.5;
	double b = 9.1;
	printf("%d\n",a);
	printf("%c\n",c);
	printf("%2.f\n",d);
	printf("%.3f\n",b);
	printf("\n %d",sizeof(a));
	printf("\n %d",sizeof(c));
	printf("\n %d",sizeof(d));
	printf("\n %d",sizeof(b));
//ARITHMETIC OPERATION
    int a = 5 , b = 2 , c,e,d;
    float f;
    c = a-b;
    e = a+b;
    d = a*b;
    char g = 'B';
    f = (float)a/b;
    printf("%d\n",c);
    printf("%d\n",e);
    printf("%d\n",d);
    printf("%f\n",f);
    printf("%d",g);

    int a,b,c;
    printf("enter num1\n");
    scanf("%d",&a);
    printf("enter num2\n");
    scanf("%d",&b);
    c = a+b;
    printf("sum is %d",c);
*/  
    int P,T;
    float R,I;
    printf("enter P");
    scanf("%d",&P);
	printf("enter T");
	scanf("%d",&T);
	printf("enter P");
	scanf("%f",&R);
	
	I = (float)(P*T*R)/100;
	printf("the interest is %f",I);
	return 0;
}
