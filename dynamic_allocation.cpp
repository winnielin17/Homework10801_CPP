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
	stnode *p;
	p = new stnode[5];
	for(int i = 0; i < 5; i++)
	{
		cout<<"Please input student's number: ";
		cin>>(p+i)->no; //*((p+i)).no
		cout<<"Please input student's gender(M/F): ";
		cin>>(p+i)->gen; //(*(p+i)).gen
		cout<<"Please input student's marriage(0/1): ";
		cin>>(p+i)->ma; //(*(p+i)).ma
		cout<<endl;
	}
	for(int i = 0; i < 4; i++)
	{
		if(p->no > (p+1)->no)
		{
			swap(*p, *(p+1));
		}
		if((p+1)->no > (p+2)->no)
		{
			swap(*(p+1), *(p+2));
		}
		if((p+2)->no > (p+3)->no)
		{
			swap(*(p+2), *(p+3));
		}
		if((p+3)->no > (p+4)->no)
		{
			swap(*(p+3), *(p+4));
		}
	}
	for(int i = 0; i < 5; i++)
	{
		cout<<"number: "<<(p+i)->no<<endl;
		cout<<"gender: "<<(p+i)->gen<<endl;
		cout<<"marriage: "<<(p+i)->ma<<endl;
		cout<<endl;
	}
}
