#include<iostream>
using namespace std;
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<" a and b are = "<<a<<b;
}
int main()
{
	int i,j;
	float res;
	cout<<"Enter 2 num";
	cin>>i>>j;
	swap(i,j);
	return 0;
} 
