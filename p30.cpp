#include<iostream>

using namespace std;
int even(int a)
{
    (a%2==0)?(cout<<"even"):(cout<<"odd");
    
}
int main()
{
	int i,e;
	cout<<"Enter number";
	cin>>i;
	even(i);

	return 0;
}
