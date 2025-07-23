#include<stdio.h>
struct employee
{
	int id,sal,exp;
	char s[100],dep[100];
}emp;
int main()
{
	int total;
	printf("enter name\n");
	scanf("%s",emp.s);
	printf("enter salary \n");
	scanf("%d",&emp.sal);
	printf("enter id \n");
	scanf("%d",&emp.id);
	printf("enter dep \n");
	scanf("%s",emp.dep);
	printf("enter exp \n");
	scanf("%d",&emp.exp);

	printf("\n name is %s",emp.s);
	printf("\n id is %d",emp.id);
	printf("\n department is %s",emp.dep);
	printf("\n experience is is %d",emp.exp);
	printf("\n salary  is %d",emp.sal);

	
	return 0;
}
