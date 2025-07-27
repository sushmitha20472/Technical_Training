#include<iostream>

using namespace std;
int even(int a)
{
	if(a%2==0)
	return 1;
	else
	return 0;
}
int main()
{
	int i,e;
	cout<<"Enter number";
	cin>>i;
	e=even(i);
	if(e)
	{
		cout<<"It is a even num";
	}
	else
	cout<<"odd";
	
	return 0;
}
