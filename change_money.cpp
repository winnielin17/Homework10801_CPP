#include <iostream>
using namespace std;

int main()
{
	cout<<"請輸入多少個1元硬幣: ";
	int n;
	cin>>n;
	cout<<"可兌換成"<<endl;
	int a, b, c, d, e, f, g, h, i, j;
	a = n / 2000;
	cout<<a<<"張2000元紙鈔"<<endl;
	b = (n - a * 2000) / 1000;
	cout<<b<<"張1000元紙鈔"<<endl;
	c = (n - a * 2000 - b * 1000) / 500;
	cout<<c<<"張500元紙鈔"<<endl;
	d = (n - a * 2000 - b * 1000 - c * 500) / 200;
	cout<<d<<"張200元紙鈔"<<endl;
	e = (n - a * 2000 - b * 1000 - c * 500 - d * 200) / 100;
	cout<<e<<"張100元紙鈔"<<endl;
	f = (n - a * 2000 - b * 1000 - c * 500 - d * 200 - e * 100) / 50;
	cout<<f<<"個50元硬幣"<<endl;
	g = (n - a * 2000 - b * 1000 - c * 500 - d * 200 - e * 100 - f * 50) / 20;
	cout<<g<<"個20元硬幣"<<endl;
	h = (n - a * 2000 - b * 1000 - c * 500 - d * 200 - e * 100 - f * 50 - g * 20) / 10;
	cout<<h<<"個10元硬幣"<<endl;
	i = (n - a * 2000 - b * 1000 - c * 500 - d * 200 - e * 100 - f * 50 - g * 20 - h * 10) / 5;
	cout<<i<<"個5元硬幣"<<endl;
	j = (n - a * 2000 - b * 1000 - c * 500 - d * 200 - e * 100 - f * 50 - g * 20 - h * 10 - i * 5) / 1;
	cout<<j<<"個1元硬幣"<<endl; 
}
