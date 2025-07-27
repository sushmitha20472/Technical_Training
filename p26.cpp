#include<iostream>

using namespace std;
void greatest(int a,int b)
{
    (a>b)?(cout<<a):(cout<<b);
    
}
int main()
{
	int i,e;
	cout<<"Enter number";
	cin>>i>>e;
	greatest(i,e);	
	return 0;
}
