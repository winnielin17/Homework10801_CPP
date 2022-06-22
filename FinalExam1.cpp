#include <iostream>
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

int main()
{
	int n;
	while(true)
	{
		n = gmenu();
		cout<<"你選擇的是: "<<n<<endl; 
		if(n < 1 || n > 4)
		{
			cout<<"輸入錯誤!!"<<endl;
			cout<<"請重新輸入"<<endl; 
		}
		if(n == 4)
		{
			break;
		}
	}
}
