#include <iostream>
using namespace std;

class stnode
{
	public:
		int no;
		char gen;
		bool ma;
};

void swap(stnode &a, stnode &b)
{
	stnode t;
	t = a;
	a = b;
	b = t;
}

int main()
{
	stnode a[5];
	for(int i = 0; i < 5; i++)
	{
		cout<<"Please input student's number: ";
		cin>>a[i].no;
		cout<<"Please input student's gender(M/F): ";
		cin>>a[i].gen;
		cout<<"Please input student's marriage(0/1): ";
		cin>>a[i].ma;
		cout<<endl;
	}
	for(int i=0; i<4; i++)
	{
		if(a[0].no > a[1].no)
		{
			swap(*a, *(a+1));
		}
		if(a[1].no > a[2].no)
		{
			swap(*(a+1), *(a+2));
		}
		if(a[2].no > a[3].no)
		{
			swap(*(a+2), *(a+3));
		}
		if(a[3].no > a[4].no)
		{
			swap(*(a+3), *(a+4));
		}
	}
	for(int i = 0; i < 5; i++)
	{
		cout<<"number: "<<a[i].no<<endl;
		cout<<"gender: "<<a[i].gen<<endl;
		cout<<"marriage: "<<a[i].ma<<endl;
		cout<<endl;
	}
}
