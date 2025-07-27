#include<iostream>
using namespace std;

int fac(int n)
{
	int i, fa = 1;
	for (i = 1; i <= n; i++)
	{
		fa = fa * i;
	}
	cout << "Factorial: " << fa << endl;
	return fa;
}

int trailing(int n)
{
	int f = fac(n);  
	int c = 0;

	while (f % 10 == 0)  
	{
		c++;
		f = f / 10;  
	}
	return c;  
}

int main()
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	int r = trailing(n);
	cout << "Trailing zeroes: " << r << endl;
	return 0;
}

