#include <iostream>
using namespace std;

int main()
{
	cout<<"�п�J�h�֭�1���w��: ";
	int n;
	cin>>n;
	cout<<"�i�I����"<<endl;
	int a, b, c, d, e, f, g, h, i, j;
	a = n / 2000;
	cout<<a<<"�i2000���ȶr"<<endl;
	b = (n - a * 2000) / 1000;
	cout<<b<<"�i1000���ȶr"<<endl;
	c = (n - a * 2000 - b * 1000) / 500;
	cout<<c<<"�i500���ȶr"<<endl;
	d = (n - a * 2000 - b * 1000 - c * 500) / 200;
	cout<<d<<"�i200���ȶr"<<endl;
	e = (n - a * 2000 - b * 1000 - c * 500 - d * 200) / 100;
	cout<<e<<"�i100���ȶr"<<endl;
	f = (n - a * 2000 - b * 1000 - c * 500 - d * 200 - e * 100) / 50;
	cout<<f<<"��50���w��"<<endl;
	g = (n - a * 2000 - b * 1000 - c * 500 - d * 200 - e * 100 - f * 50) / 20;
	cout<<g<<"��20���w��"<<endl;
	h = (n - a * 2000 - b * 1000 - c * 500 - d * 200 - e * 100 - f * 50 - g * 20) / 10;
	cout<<h<<"��10���w��"<<endl;
	i = (n - a * 2000 - b * 1000 - c * 500 - d * 200 - e * 100 - f * 50 - g * 20 - h * 10) / 5;
	cout<<i<<"��5���w��"<<endl;
	j = (n - a * 2000 - b * 1000 - c * 500 - d * 200 - e * 100 - f * 50 - g * 20 - h * 10 - i * 5) / 1;
	cout<<j<<"��1���w��"<<endl; 
}
