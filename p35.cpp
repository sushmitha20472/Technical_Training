#include<iostream>
using namespace std;


int grade(int a)
{

	if(a>90)
	{
		cout<<"A+";
	}
	else if(a>80)
	{
		cout<<"A";
	}
	else if(a>70)
	{
		cout<<"B+";
	}
	else if(a>60)
	{
		cout<<"B";
	}
	else if(a>50)
	{
		cout<<"C";
	}
	else if(a>40)
	{
		cout<<"D";
	}
	else if(a>35)
	{
		cout<<"E";
	}
	else if(a>0)
	{
		cout<<"FAIL";
	}
}

int main()
{
	int x,y,z,t;
	float c;
	cout<<"Enter your 3 sub marks x,y,z\n";
	cin>>x>>y>>z;
	t=x+y+z;
	c=(float)(t/3);
	
	cout<<"Total is";
	cout<<"avg is ";
	grade(c);
	
}

