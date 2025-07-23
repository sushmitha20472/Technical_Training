#include<stdio.h>
#include<ctype.h>
int main()
{
	char s[100];
	int i,j,l=0,flag=0;
	scanf("%[^\n]s",s);
	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if(s[i]!=s[l-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("palendrome\n");
	}
	else
	{
		printf("not\n");
	}
	return 0;
}
