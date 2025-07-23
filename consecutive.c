#include<stdio.h>
#include<string.h>
#include<ctype.h>
int con(char *c,int s)
{
	int i,count;
	for(i=0;c[i]<s;i++)
	{
		if(!((c[i]=='a')&&(c[i]=='e')&&(c[i]=='i')&&(c[i]=='o')&&(c[i]=='u')))
		{
			count=0;
		}
		else
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
	int l=strlen(s);
	for(i=0;s[i]!='\0';i++)
	{
	scanf("%[^/n]s",s);
	}
	c=con(s,l);
	printf("\n%d",c);
}
