#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int rand();
/*
	所求 = rand() % (j - i + 1) + i
	0, 1, 2, ..., j-i
	0 <= 所求 <= j-i
	i <= 所求 <= j
*/

int main()
{
	int n, y, c;
	int w = 0, t = 0, l = 0;
	cout<<"歡迎進入和電腦比賽的遊戲"<<endl;
	while(true)
	{
		cout<<"1.比大"<<endl;
		cout<<"2.比小"<<endl;
		cout<<"3.離開"<<endl;
		cout<<"請選擇(輸入數字):";
		cin>>n;
		if(n < 1 || n > 3)
		{
			cout<<"輸入錯誤!!"<<endl;
			cout<<"請重新輸入"<<endl;
		}
		if(n == 1)
		{
			srand(time(NULL));
			y = rand() % 6 + 1;
			c = rand() % 6 + 1;
			cout<<"你的點數:"<<y<<endl;
			cout<<"電腦的點數:"<<c<<endl;
			if(y > c)
			{
				w = w + 1;
				cout<<"恭喜你贏了"<<endl;
			}
			if(y == c)
			{
				t = t + 1;
				cout<<"恭喜平手"<<endl;
			}
			if(y < c)
			{
				l = l + 1;
				cout<<"很抱歉你輸了"<<endl;
			}
		}	
		if(n == 2)
		{
			srand(time(NULL));
			y = rand() % 6 + 1;
			c = rand() % 6 + 1;
			cout<<"你的點數:"<<y<<endl;
			cout<<"電腦的點數:"<<c<<endl;
			if(y < c)
			{
				w = w + 1;
				cout<<"恭喜你贏了"<<endl;
			}
			if(y == c)
			{
				t = t + 1;
				cout<<"恭喜平手"<<endl;
			}
			if(y > c)
			{
				l = l + 1;
				cout<<"很抱歉你輸了"<<endl;
			}
		}
		if(n == 3)
		{
			cout<<"此次戰績:"<<endl; 
			cout<<"贏"<<w<<"次"<<endl;
			cout<<"平手"<<t<<"次"<<endl;
			cout<<"輸"<<l<<"次"<<endl;
			if(w > l)
			{
				cout<<"恭喜你贏了"<<endl;
			}
			if(w == l)
			{
				cout<<"恭喜平手"<<endl; 
			}
			if(w < l)
			{
				cout<<"很抱歉你輸了"<<endl; 
			}
			cout<<"歡迎下次再來玩~";
			break;
		}	
	}
}
