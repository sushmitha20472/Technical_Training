#include<stdio.h>
struct student
{
	int x,y,z;
	char s[100];
	float av;
}stu;
int main()
{
	int total;
	printf("enter name\n");
	scanf("%s",stu.s);
	printf("enter marks x\n");
	scanf("%d",&stu.x);
	printf("enter marks y\n");
	scanf("%d",&stu.y);
	printf("enter marks z\n");
	scanf("%d",&stu.z);
	
	total=stu.x+stu.y+stu.z;
	stu.av=(float)total/3;
	printf("\nname is %s",stu.s);
	printf("\nname is %d",stu.x);
	printf("\nname is %d",stu.y);
	printf("\nname is %d",stu.z);
	printf("\nname is %d",total);
	printf("\nname is %f",stu.av);
	
	return 0;
}
