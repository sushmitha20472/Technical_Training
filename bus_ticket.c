#include<stdio.h>
int main()
{
	int  src,dest,adult,children,cost_adult,cost_children,dist,total_cost;
	printf("Enter your source stage number\n");
	scanf("\n %d",&src);
	printf("Enter your destination stage number\n");
	scanf("\n %d",&dest);
	dist = dest - src;
	printf("enter the number of adults in the bus");
	scanf("\n %d",&adult);
	printf("enter the number of children in the bus");
	scanf("\n %d",&children);
	
	printf("the road tax is 5 percentage \n");
	cost_adult = (10*adult*dist)+0.05;
	cost_children = (5*children*dist)+0.05;
	total_cost = cost_adult + cost_children;
	printf("total price is %d",total_cost);
	return 0;
	
	
}
