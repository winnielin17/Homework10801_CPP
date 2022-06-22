#include <iostream>
using namespace std;

void f(int &a, int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
}

int main()
{
	int a, b, c, d, e;
	cout<<"Please input a, b, c, d, e"<<endl;
	cin>>a>>b>>c>>d>>e;
	for(int i = 0; i < 4; i++)
	{
		if(a < b)
		{
			f(a, b);
		}
		if(b < c)
		{
			f(b, c);
		}
		if(c < d)
		{
			f(c, d);
		}
		if(d < e)
		{
			f(d, e);
		}
	}
	cout<<a<<">="<<b<<">="<<c<<">="<<d<<">="<<e;
}
