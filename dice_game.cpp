#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int rand();
/*
	�ҨD = rand() % (j - i + 1) + i
	0, 1, 2, ..., j-i
	0 <= �ҨD <= j-i
	i <= �ҨD <= j
*/

int main()
{
	int n, y, c;
	int w = 0, t = 0, l = 0;
	cout<<"�w��i�J�M�q�����ɪ��C��"<<endl;
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
			y = rand() % 6 + 1;
			c = rand() % 6 + 1;
			cout<<"�A���I��:"<<y<<endl;
			cout<<"�q�����I��:"<<c<<endl;
			if(y > c)
			{
				w = w + 1;
				cout<<"���ߧAĹ�F"<<endl;
			}
			if(y == c)
			{
				t = t + 1;
				cout<<"���ߥ���"<<endl;
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
			y = rand() % 6 + 1;
			c = rand() % 6 + 1;
			cout<<"�A���I��:"<<y<<endl;
			cout<<"�q�����I��:"<<c<<endl;
			if(y < c)
			{
				w = w + 1;
				cout<<"���ߧAĹ�F"<<endl;
			}
			if(y == c)
			{
				t = t + 1;
				cout<<"���ߥ���"<<endl;
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
			cout<<"����"<<t<<"��"<<endl;
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
