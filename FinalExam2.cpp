#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int gmenu()
{
	cout<<"請選擇下列的遊戲"<<endl;
	cout<<"1. 比大(一張牌)"<<endl;
	cout<<"2. 比小(一張牌)"<<endl;
	cout<<"3. 比大(兩張牌)"<<endl;
	cout<<"4. 離開"<<endl;
	cout<<"請選擇 (1, 2, 3, 4): ";
	int x;
	cin>>x;
	return x; 
}

int rand();

int main()
{
	int n;
	int y1, y1p, y1f, y2, y2p, y2f, yt;
	int c1, c1p, c1f, c2, c2p, c2f, ct;
	int counter = 52, w = 0, l = 0;
	int a[52];
	for(int i = 0; i < 52; i++)
	{
		a[i] = 1;
	}
	while(true)
	{
		n = gmenu();
		cout<<"你選擇的是:"<<n<<endl; 
		if(n < 1 || n > 4)
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
				y1 = rand() % 52;
				if(a[y1] == 1)
				{
					a[y1] = 0;
					y1p = y1 / 4 + 1;
					y1f = y1 % 4;
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
				c1 = rand() % 52;
				if(a[c1] == 1 && c1 != y1)
				{
					a[c1] = 0;
					c1p = c1 / 4 + 1;
					c1f = c1 % 4;
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
			if(y1f == 0)
			{
				cout<<"你的點數:梅花"<<y1p<<endl;
			}
			if(y1f == 1)
			{
				cout<<"你的點數:方塊"<<y1p<<endl;
			}
			if(y1f == 2)
			{
				cout<<"你的點數:愛心"<<y1p<<endl;
			}
			if(y1f == 3)
			{
				cout<<"你的點數:黑桃"<<y1p<<endl;
			}
			if(c1f == 0)
			{
				cout<<"電腦的點數:梅花"<<c1p<<endl;
			}
			if(c1f == 1)
			{
				cout<<"電腦的點數:方塊"<<c1p<<endl;
			}
			if(c1f == 2)
			{
				cout<<"電腦的點數:愛心"<<c1p<<endl;
			}
			if(c1f == 3)
			{
				cout<<"電腦的點數:黑桃"<<c1p<<endl;
			}
			if(y1 > c1)
			{
				w = w + 1;
				cout<<"恭喜你贏了"<<endl;
			}
			if(y1 < c1)
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
				y1 = rand() % 52;
				if(a[y1] == 1)
				{
					a[y1] = 0;
					y1p = y1 / 4 + 1;
					y1f = y1 % 4;
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
				c1 = rand() % 52;
				if(a[c1] == 1 && c1 != y1)
				{
					a[c1] = 0;
					c1p = c1 / 4 + 1;
					c1f = c1 % 4;
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
			if(y1f == 0)
			{
				cout<<"你的點數:梅花"<<y1p<<endl;
			}
			if(y1f == 1)
			{
				cout<<"你的點數:方塊"<<y1p<<endl;
			}
			if(y1f == 2)
			{
				cout<<"你的點數:愛心"<<y1p<<endl;
			}
			if(y1f == 3)
			{
				cout<<"你的點數:黑桃"<<y1p<<endl;
			}
			if(c1f == 0)
			{
				cout<<"電腦的點數:梅花"<<c1p<<endl;
			}
			if(c1f == 1)
			{
				cout<<"電腦的點數:方塊"<<c1p<<endl;
			}
			if(c1f == 2)
			{
				cout<<"電腦的點數:愛心"<<c1p<<endl;
			}
			if(c1f == 3)
			{
				cout<<"電腦的點數:黑桃"<<c1p<<endl;
			}
			if(y1 < c1)
			{
				w = w + 1;
				cout<<"恭喜你贏了"<<endl;
			}
			if(y1 > c1)
			{
				l = l + 1;
				cout<<"很抱歉你輸了"<<endl;
			}
		}
		if(n == 3)
		{
			srand(time(NULL));
			while(counter == 2)
			{
				cout<<"對不起牌不夠了"<<endl;
				cout<<"沒有辦法玩這個遊戲"<<endl;
				cout<<"請選擇別的遊戲"<<endl;
				break; 
			}
			while(true && counter != 2)
			{
				if(counter == 0)
				{
					counter = -1;
					break;
				}
				y1 = rand() % 52;
				if(a[y1] == 1)
				{
					a[y1] = 0;
					y1p = y1 / 4 + 1;
					y1f = y1 % 4;
					counter = counter - 1;
					break;
				}
			}
			while(true && counter != 2)
			{
				if(counter < 0)
				{
					break;
				}
				y2 = rand() % 52;
				if(a[y2] == 1 && y2 != y1)
				{
					a[y2] = 0;
					y2p = y2 / 4 + 1;
					y2f = y2 % 4;
					counter = counter - 1;
					break;
				}
			}
			while(true && counter != 2)
			{
				if(counter < 0)
				{
					break;
				}
				c1 = rand() % 52;
				if(a[c1] == 1 && c1 != y1 && c1 != y2)
				{
					a[c1] = 0;
					c1p = c1 / 4 + 1;
					c1f = c1 % 4;
					counter = counter - 1;
					break;
				}
			}
			while(true && counter != 2)
			{
				if(counter < 0)
				{
					break;
				}
				c2 = rand() % 52;
				if (a[c2] == 1 && c2 != y1 && c2 != y2 && c2 != c1)
				{
					a[c2] = 0;
					c2p = c2 / 4 + 1;
					c2f = c2 % 4;
					counter = counter - 1;
					break;
				}
			}
			if(counter<0)
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
			while(true && counter != 2)
			{
				if(y1f == 0)
				{
					cout<<"你的點數:梅花"<<y1p<<endl;
				}
				if(y1f == 1)
				{
					cout<<"你的點數:方塊"<<y1p<<endl;
				}
				if(y1f == 2)
				{
					cout<<"你的點數:愛心"<<y1p<<endl;
				}
				if(y1f == 3)
				{
					cout<<"你的點數:黑桃"<<y1p<<endl;
				}
				if(y2f == 0)
				{
					cout<<"你的點數:梅花"<<y2p<<endl;
				}
				if(y2f == 1)
				{
					cout<<"你的點數:方塊"<<y2p<<endl;
				}
				if(y2f == 2)
				{
					cout<<"你的點數:愛心"<<y2p<<endl;
				}
				if(y2f == 3)
				{
					cout<<"你的點數:黑桃"<<y2p<<endl;
				}
				if(c1f == 0)
				{
					cout<<"電腦的點數:梅花"<<c1p<<endl;
				}
				if(c1f == 1)
				{
					cout<<"電腦的點數:方塊"<<c1p<<endl;
				}
				if(c1f == 2)
				{
					cout<<"電腦的點數:愛心"<<c1p<<endl;
				}
				if(c1f == 3)
				{
					cout<<"電腦的點數:黑桃"<<c1p<<endl;
				}
				if(c2f == 0)
				{
					cout<<"電腦的點數:梅花"<<c2p<<endl;
				}
				if(c2f == 1)
				{
					cout<<"電腦的點數:方塊"<<c2p<<endl;
				}
				if(c2f == 2)
				{
					cout<<"電腦的點數:愛心"<<c2p<<endl;
				}
				if(c2f == 3)
				{
					cout<<"電腦的點數:黑桃"<<c2p<<endl;
				}
				yt = y1p + y2p;
				ct = c1p + c2p;
				if(yt > ct)
				{
					w = w + 1;
					cout<<"恭喜你贏了"<<endl;
				}
				if(yt < ct)
				{
					l = l + 1;
					cout<<"很抱歉你輸了"<<endl;
				}
				if(yt == ct)
				{
					int ypb, cpb;
					if(y1p > y2p)
					{
						ypb = y1p;
					}
					if(y1p < y2p)
					{
						ypb = y2p;
					}
					if(c1p > c2p)
					{
						cpb = c1p;
					}
					if(c1p < c2p)
					{
						cpb = c2p;
					}
					if(ypb > cpb)
					{
						w = w + 1;
						cout<<"恭喜你贏了"<<endl;
					}
					if(ypb < cpb)
					{
						l = l + 1;
						cout<<"很抱歉你輸了"<<endl;
					}
					if(ypb == cpb)
					{
						int yfb, cfb;
						if(y1f > y2f)
						{
							yfb = y1f;
						}
						if(y1f < y2f)
						{
							yfb = y2f;
						}
						if(c1f > c2f)
						{
							cfb = c1f;
						}
						if(c1f < c2f)
						{
							cfb = c2f;
						}
						if(yfb > cfb)
						{
							w = w + 1;
							cout<<"恭喜你贏了"<<endl;
						}
						if(yfb < cfb)
						{
							l = l + 1;
							cout<<"很抱歉你輸了"<<endl;
						}
					}
				}
				break;
			}
		}
		if(n == 4)
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
