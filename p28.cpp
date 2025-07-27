#include<iostream>

using namespace std;
int sign(int a)
{
	if(a<0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
    
    
}
int main()
{
	int i,e;
	cout<<"Enter number";
	cin>>i;
	int x=sign(i);	
	if(x)
	{
		cout<<"negative";
	}
	else
	cout<<"positive";
	return 0;
}
