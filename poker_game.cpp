#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int rand();

int main()
{
	int n, y, yp, yf, c, cp, cf;
	int counter = 52, w = 0, l = 0;
	cout<<"�w��i�J�M�q�����ɪ��C��"<<endl;
	int a[52];
	for(int i = 0; i < 52; i++)
	{
		a[i] = 1; //�S�o�X���P 
	}
	while(true)
	{
		cout<<"1.��j"<<endl;
		cout<<"2.��p"<<endl;
		cout<<"3.���}"<<endl;
		cout<<"�п��(��J�Ʀr):";
		cin>>n;
		if(n < 1 || n > 3)
		{
			cout<<"��J���~!!"<<endl;
			cout<<"�Э��s��J"<<endl;
		}
		if(n == 1)
		{
			srand(time(NULL));
			while(true)
			{
				if(counter == 0)
				{
					counter = -1;
					break;
				}
				y = rand() % 52;
				if(a[y] == 1)
				{
					a[y] = 0;
					yp = y / 4 + 1;
					yf = y % 4;
					counter = counter - 1;
					break;
				}
			}
			while(true)
			{
				if(counter < 0)
				{
					break;
				}
				c = rand() % 52;
				if(a[c] == 1 && c != y)
				{
					a[c] = 0;
					cp = c / 4 + 1;
					cf = c % 4;
					counter = counter - 1;
					break;
				}
			}
			if(counter < 0)
			{
				cout<<"�藍�_�w�g�S���P�F"<<endl;
				cout<<"�������Z:"<<endl; 
				cout<<"Ĺ"<<w<<"��"<<endl;
				cout<<"��"<<l<<"��"<<endl;
				if(w > l)
				{
					cout<<"���ߧAĹ�F"<<endl;
				}
				if(w == l)
				{
					cout<<"���ߥ���"<<endl;
				}
				if(w < l)
				{
					cout<<"�ܩ�p�A��F"<<endl; 
				}
				cout<<"�w��U���A�Ӫ�~";
				break;
			}
			if(yf == 0)
			{
				cout<<"�A���I��:����"<<yp<<endl;
			}
			if(yf == 1)
			{
				cout<<"�A���I��:���"<<yp<<endl;
			}
			if(yf == 2)
			{
				cout<<"�A���I��:�R��"<<yp<<endl;
			}
			if(yf == 3)
			{
				cout<<"�A���I��:�®�"<<yp<<endl;
			}
			if(cf == 0)
			{
				cout<<"�q�����I��:����"<<cp<<endl;
			}
			if(cf == 1)
			{
				cout<<"�q�����I��:���"<<cp<<endl;
			}
			if(cf == 2)
			{
				cout<<"�q�����I��:�R��"<<cp<<endl;
			}
			if(cf == 3)
			{
				cout<<"�q�����I��:�®�"<<cp<<endl;
			}
			if(y > c)
			{
				w = w + 1;
				cout<<"���ߧAĹ�F"<<endl;
			}
			if(y < c)
			{
				l = l + 1;
				cout<<"�ܩ�p�A��F"<<endl;
			}
		}	
		if(n == 2)
		{
			srand(time(NULL));
			while(true)
			{
				if(counter == 0)
				{
					counter = -1;
					break;
				}
				y = rand() % 52;
				if(a[y] == 1)
				{
					a[y] = 0;
					yp = y / 4 + 1;
					yf = y % 4;
					counter = counter - 1;
					break;
				}
			}
			while(true)
			{
				if(counter < 0)
				{
					break;
				}
				c = rand() % 52;
				if(a[c] == 1 && c != y)
				{
					a[c] = 0;
					cp = c / 4 + 1;
					cf = c % 4;
					counter = counter - 1;
					break;
				}
			}
			if(counter < 0)
			{
				cout<<"�藍�_�w�g�S���P�F"<<endl;
				cout<<"�������Z:"<<endl; 
				cout<<"Ĺ"<<w<<"��"<<endl;
				cout<<"��"<<l<<"��"<<endl;
				if(w > l)
				{
					cout<<"���ߧAĹ�F"<<endl;
				}
				if(w == l)
				{
					cout<<"���ߥ���"<<endl; 
				}
				if(w < l)
				{
					cout<<"�ܩ�p�A��F"<<endl; 
				}
				cout<<"�w��U���A�Ӫ�~";
				break;
			}
			if(yf == 0)
			{
				cout<<"�A���I��:����"<<yp<<endl;
			}
			if(yf == 1)
			{
				cout<<"�A���I��:���"<<yp<<endl;
			}
			if(yf == 2)
			{
				cout<<"�A���I��:�R��"<<yp<<endl;
			}
			if(yf == 3)
			{
				cout<<"�A���I��:�®�"<<yp<<endl;
			}
			if(cf == 0)
			{
				cout<<"�q�����I��:����"<<cp<<endl;
			}
			if(cf == 1)
			{
				cout<<"�q�����I��:���"<<cp<<endl;
			}
			if(cf == 2)
			{
				cout<<"�q�����I��:�R��"<<cp<<endl;
			}
			if(cf == 3)
			{
				cout<<"�q�����I��:�®�"<<cp<<endl;
			}
			if(y < c)
			{
				w = w + 1;
				cout<<"���ߧAĹ�F"<<endl;
			}
			if(y > c)
			{
				l = l + 1;
				cout<<"�ܩ�p�A��F"<<endl;
			}
		}
		if(n == 3)
		{
			cout<<"�������Z:"<<endl; 
			cout<<"Ĺ"<<w<<"��"<<endl;
			cout<<"��"<<l<<"��"<<endl;
			if(w > l)
			{
				cout<<"���ߧAĹ�F"<<endl;
			}
			if(w == l)
			{
				cout<<"���ߥ���"<<endl; 
			}
			if(w < l)
			{
				cout<<"�ܩ�p�A��F"<<endl; 
			}
			cout<<"�w��U���A�Ӫ�~";
			break;
		}	
	}
}
