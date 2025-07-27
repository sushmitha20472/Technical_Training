#include<iostream>

using namespace std;
void smallest(int a,int b)
{
    (a<b)?(cout<<a):(cout<<b);
    
}
int main()
{
	int i,e;
	cout<<"Enter number";
	cin>>i>>e;
	smallest(i,e);	
	return 0;
}
