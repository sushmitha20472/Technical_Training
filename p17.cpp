#include<iostream>
using namespace std;
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"a and b are = "<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
}
int main()
{
	int i,j;
	float res;
	cout<<"Enter 2 num"<<endl;
	cin>>i>>j;
	swap(i,j);
	return 0;
} 
