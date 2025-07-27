#include<iostream>
#include<string.h>
#include<ctype.h>

using namespace std;

int special(char *s)
{
    int count=0;
	for(int i=0;s[i]!='\0';i++)
	{
		/*if(islower(s[i]))
		count =0;
		else if(isupper(s[i]))
		count =0;
		else if(isdigit(s[i]))
		count =0;
		else if(isspace(s[i]))
		count=0;
		else
		count++;
		*/
		if(!((isspace(s[i]))||isalnum(s[i])))
		count++;		
	}
	return count;
		
	
}




int main()
{
	char s[100];
	cout<<"Enter a string";
	cin.gets(s, 100); 
	int x = special(s);
	if(x)
	cout<<x;
	else
	cout<<"no misses";
	return 0;
	
}
