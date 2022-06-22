#include <iostream>
using namespace std;

class stnode
{
	public:
		int no;
		char name[10];
		char gen;
		bool ma;
		stnode *ptr;
};

int main()
{
	stnode *head, *q, *f, *p;
	head = NULL;
	while(true)
	{
		if(head == NULL)
		{
			head = new stnode;
			cout<<"Please input student's number: ";
			cin>>head->no;
			cout<<"Please input student's name: ";
			cin>>head->name;
			cout<<"Please input student's gender(M/F): ";
			cin>>head->gen;
			cout<<"Please input student's marriage(0/1): ";
			cin>>head->ma;
			head->ptr = NULL;
			cout<<endl;
		}
		else
		{
			int x;
			cout<<"請問是否要繼續?"<<endl;
			cout<<"是(1)/否(0):";
			cin>>x;
			cout<<endl;
			if(x == 1)
			{
				q = new stnode;
				cout<<"Please input student's number: ";
				cin>>q->no;
				cout<<"Please input student's name: ";
				cin>>q->name;
				cout<<"Please input student's gender(M/F): ";
				cin>>q->gen;
				cout<<"Please input student's marriage(0/1): ";
				cin>>q->ma;
				cout<<endl;
				f = NULL;
				p = head;
				while(p != NULL && p->no < q->no)
				{
					f = p; //f跑到p的位置 
					p = p->ptr; //p跑到下一個 
				}
				if(f == NULL) //q最小 
				{
					q->ptr = head;
					head = q;
				}
				else //q在中間或最大 
				{
					f->ptr = q;
					q->ptr = p;
				}
			}
			if(x == 0)
			{
				break;
			}
		}
	}
	p = head;
	while(p != 0)
	{
		cout<<"number: "<<p->no<<endl;
		cout<<"name: "<<p->name<<endl;
		cout<<"gender: "<<p->gen<<endl;
		cout<<"marriage: "<<p->ma<<endl;
		cout<<endl;
		p = p->ptr; //往後一個 
	}
}
