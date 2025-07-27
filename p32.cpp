	//CHECKING STUDENT RESULT
#include<iostream>
using namespace std;

int marks(int m,int p, int c)
{
	float avg;
	int total;
	if(m>35)
	{
		if(p>35)
		{
			if(c>35)
			{
				cout<<"you are pass";
				total = m+p+c;
				avg = (float)(total/3);
				cout<<total<<endl;
				cout<<avg;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	
	}

	return 0;
}


int main()
{
	int m,p,c,total;
	
	cout<<"Enter your marks m,n,c";
	cin>>m>>p>>c;
	int x=marks(m,p,c);
	
	if(x)
	{
		return 0;
	}
	else
	{
		cout<<"fail";
	}
}
	
	
	
	

