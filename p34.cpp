#include<iostream>
using namespace std;

int vowel(char s)
{
	if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
	{
		return 1;
	}
	return 0;
}



int main()
{
	char c;
	cout<<"enter a char";
	cin>>c;
	int s=vowel(c);
	if(s)
	{
		cout<<"it is a ovel";
	}
	else
	{
		cout<<"not a owel";
	}
}
