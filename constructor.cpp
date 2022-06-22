#include <iostream>
#include <cstring>
using namespace std;

class stnode
{
	private:
		int no;
		char name[20];
		char gen;
		bool ma;
		stnode *ptr;
	public:
		stnode() { no = 0; ptr = NULL; cout<<"Yeah!!"<<endl; }
		void writeno(int t)
		{
			no = t;
		}
		int readno()
		{
			return no;
		}
		void writename(char t[])
		{
			strcpy(name, t);
		}
		char *readname()
		{
			return name;
		}
		void writegen(char t)
		{
			gen = t;
		}
		char readgen()
		{
			return gen;
		}
		void writema(bool t)
		{
			ma = t;
		}
		bool readma()
		{
			return ma;
		}
		void writeptr(stnode *t)
		{
			ptr = t;
		}
		stnode *readptr()
		{
			return ptr;
		}
};

int main()
{
	stnode *head, *q, *f, *p;
	int tno;
	char tname[20];
	char tgen;
	bool tma;
	head = NULL;
	while(true)
	{
		if(head == NULL)
		{
			head = new stnode;
			cout<<"Please input student's number: ";
			cin>>tno;
			cin.get();
			head->writeno(tno);
			cout<<"Please input student's name: ";
			cin.getline(tname, 20);
			head->writename(tname);
			cout<<"Please input student's gender(M/F): ";
			cin>>tgen;
			head->writegen(tgen);
			cout<<"Please input student's marriage(0/1): ";
			cin>>tma;
			head->writema(tma);
			head->writeptr(NULL);
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
				cin>>tno;
				cin.get();
				q->writeno(tno);
				cout<<"Please input student's name: ";
				cin.getline(tname, 20);
				q->writename(tname);
				cout<<"Please input student's gender(M/F): ";
				cin>>tgen;
				q->writegen(tgen);
				cout<<"Please input student's marriage(0/1): ";
				cin>>tma;
				q->writema(tma);
				cout<<endl;
				f = NULL;
				p = head;
				while(p != NULL && p->readno() < q->readno())
				{
					f = p; //f跑到p的位置 
					p = p->readptr(); //p跑到下一個 
				}
				if(f == NULL) //q最小 
				{
					q->writeptr(head);
					head = q;
				}
				else //q在中間或最大 
				{
					f->writeptr(q);
					q->writeptr(p);
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
		cout<<"number: "<<p->readno()<<endl;
		cout<<"name: "<<p->readname()<<endl;
		cout<<"gender: "<<p->readgen()<<endl;
		cout<<"marriage: "<<p->readma()<<endl;
		cout<<endl;
		p = p->readptr(); //往後一個 
	}
}
