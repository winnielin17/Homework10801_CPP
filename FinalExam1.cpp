#include <iostream>
using namespace std;

int gmenu()
{
	cout<<"�п�ܤU�C���C��"<<endl;
	cout<<"1. ��j(�@�i�P)"<<endl;
	cout<<"2. ��p(�@�i�P)"<<endl;
	cout<<"3. ��j(��i�P)"<<endl;
	cout<<"4. ���}"<<endl;
	cout<<"�п�� (1, 2, 3, 4): ";
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
		cout<<"�A��ܪ��O: "<<n<<endl; 
		if(n < 1 || n > 4)
		{
			cout<<"��J���~!!"<<endl;
			cout<<"�Э��s��J"<<endl; 
		}
		if(n == 4)
		{
			break;
		}
	}
}
