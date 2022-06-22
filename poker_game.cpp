#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int rand();

int main()
{
	int n, y, yp, yf, c, cp, cf;
	int counter = 52, w = 0, l = 0;
	cout<<"歡迎進入和電腦比賽的遊戲"<<endl;
	int a[52];
	for(int i = 0; i < 52; i++)
	{
		a[i] = 1; //沒發出的牌 
	}
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
				cout<<"對不起已經沒有牌了"<<endl;
				cout<<"此次戰績:"<<endl; 
				cout<<"贏"<<w<<"次"<<endl;
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
			if(yf == 0)
			{
				cout<<"你的點數:梅花"<<yp<<endl;
			}
			if(yf == 1)
			{
				cout<<"你的點數:方塊"<<yp<<endl;
			}
			if(yf == 2)
			{
				cout<<"你的點數:愛心"<<yp<<endl;
			}
			if(yf == 3)
			{
				cout<<"你的點數:黑桃"<<yp<<endl;
			}
			if(cf == 0)
			{
				cout<<"電腦的點數:梅花"<<cp<<endl;
			}
			if(cf == 1)
			{
				cout<<"電腦的點數:方塊"<<cp<<endl;
			}
			if(cf == 2)
			{
				cout<<"電腦的點數:愛心"<<cp<<endl;
			}
			if(cf == 3)
			{
				cout<<"電腦的點數:黑桃"<<cp<<endl;
			}
			if(y > c)
			{
				w = w + 1;
				cout<<"恭喜你贏了"<<endl;
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
				cout<<"對不起已經沒有牌了"<<endl;
				cout<<"此次戰績:"<<endl; 
				cout<<"贏"<<w<<"次"<<endl;
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
			if(yf == 0)
			{
				cout<<"你的點數:梅花"<<yp<<endl;
			}
			if(yf == 1)
			{
				cout<<"你的點數:方塊"<<yp<<endl;
			}
			if(yf == 2)
			{
				cout<<"你的點數:愛心"<<yp<<endl;
			}
			if(yf == 3)
			{
				cout<<"你的點數:黑桃"<<yp<<endl;
			}
			if(cf == 0)
			{
				cout<<"電腦的點數:梅花"<<cp<<endl;
			}
			if(cf == 1)
			{
				cout<<"電腦的點數:方塊"<<cp<<endl;
			}
			if(cf == 2)
			{
				cout<<"電腦的點數:愛心"<<cp<<endl;
			}
			if(cf == 3)
			{
				cout<<"電腦的點數:黑桃"<<cp<<endl;
			}
			if(y < c)
			{
				w = w + 1;
				cout<<"恭喜你贏了"<<endl;
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
