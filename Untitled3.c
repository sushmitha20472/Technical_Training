#include<stdio.h>
#include<string.h>
#include<ctype.h>
int con(char *c,int s)
{
	int i,count;
	for(i=0;i<s;i++)
	{
		if(!((c[i]=='a')&&(c[i]=='e')&&(c[i]=='i')&&(c[i]=='o')&&(c[i]=='u')))
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int c,i;
	char s[100];

	for(i=0;s[i]!='\0';i++)
	{
	scanf("%[^/n]s",s);
	}
	int l=strlen(s);
	c=con(s,l);
	printf("\nconsenent count is %d",c);
	return 0;
}
