#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter num between 1-100"<<endl;
	cin>>n;
	while(1)
	{
		cin>>n;
		
		if(1<n<100)
		{
		
		int c=n;
		break;
	}
	cout<<"please enter between 1 to 100"<<endl;
	}
	
	cout<<"you have entered"<<endl;
	return 0;
}
