#include<stdio.h>
int main()
{
int a=278,b=353,c;
printf("enter a number \n");
scanf("%d",&c);

printf("\nbitwise or =%d \nbitwise and = %d \nbitwise xor = %d  \nbitwise right shift = %d \nbitwise left shift = %d\n",a|b,a&b,a^b,a>>b,a<<b);

((c&1)==0)?(printf("num is even")):(printf("num  is odd"));

return 0;
}
