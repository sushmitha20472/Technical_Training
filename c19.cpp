#include<iostream>
#include<ctime>

#include<cstdlib>
using namespace std;
int random(int x)
{
	Srand(time(0));

	x=(rand()%10000)+1;

	return x;
	
}
int main()
{
	int y,res;
	res=random(y);
	cout<<res;
	return 0;
}
