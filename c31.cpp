#include<iostream>

using namespace std;
int even(int a)
{
	while(a%2==0)
	{
		return 1;
	}
	return 0;
    
}
int main()
{
	int i,e;
	cout<<"Enter number";
	cin>>i;
	int s=even(i);
	if(s)
	{
		cout<<"even";
	}
	else
	{
		cout<<"odd";
	}

	return 0;
}
