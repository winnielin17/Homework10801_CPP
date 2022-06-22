#include <iostream>
#include <cstring>
using namespace std;

class Stnode
{
	protected:
		int no;
		char name[21];
		int math;
		Stnode *ptr;
	public:
		Stnode() { no = 0; math = 0; }
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
		void writemath(int t)
		{
			math = t;
		}
		int readmath()
		{
			return math;
		}
		void writeptr(Stnode *t)
		{
			ptr = t;
		}
		Stnode *readptr()
		{
			return ptr;
		}
};

class CS : public Stnode
{
	private:
		int cs;
		int oo;
		CS *cptr;
	public:
		void writecs(int t)
		{
			cs = t;
		}
		int readcs()
		{
			return cs;
		}
		void writeoo(int t)
		{
			oo = t;
		}
		int readoo()
		{
			return oo;
		}
		void writecptr(CS *t)
		{
			cptr = t;
		}
		CS *readcptr()
		{
			return cptr;
		}
};

class PE : public Stnode
{
	private:
		int pe;
		PE *pptr;
	public:
		void writepe(int t)
		{
			pe = t;
		}
		int readpe()
		{
			return pe;
		}
		void writepptr(PE *t)
		{
			pptr = t;
		}
		PE *readpptr()
		{
			return pptr;
		}
};

class MENU
{
	public:
		void menu()
		{
			cout<<"(1).�s�W�ǥ͸��"<<endl;
			cout<<"(2).�R���ǥ͸��"<<endl;
			cout<<"(3).�C�L��C���"<<endl;
			cout<<"(4).���}"<<endl; 
			cout<<"�п�J��ܶ���: ";
		}
};

int main()
{
	CS *head, *q, *f, *p;
	int tno;
	char tname[21];
	int tmath, tcs, too, tpe;
	MENU m;
	int n,x;
	head = NULL;
	while(true)
	{
		m.menu();
		cin>>n;
		cout<<endl;
		if(n < 1 || n > 4)
		{
			cout<<"��J���~!!"<<endl;
			cout<<"�Э��s���"<<endl;
			cout<<endl;
		}
		int t = 1;
		if(n == 1)
		{
			cout<<"�s�W�ǥ͸�ư��椤"<<endl;
			cout<<endl;
			if(head == NULL)
			{
				head = new CS;
				cout<<"�п�J�ǥͮy��: ";
				cin>>tno;
				while(tno <= 0)
				{
					cout<<"��J���y���n>0!!"<<endl;
					cout<<"�Э��s��J: ";
					cin>>tno;
				}
				head->writeno(tno);
				cout<<"�п�J�ǥͩm�W: ";
				cin.get();
				cin.getline(tname, 21);
				head->writename(tname);
				cout<<"�п�J�ǥͼƾǦ��Z: ";
				cin>>tmath;
				while(tmath < 0 || tmath > 100)
				{
					cout<<"��J�����Z�n�b0~100����!!"<<endl;
					cout<<"�Э��s��J: ";
					cin>>tmath;
				}
				head->writemath(tmath);
				cout<<"�п�J�ǥͭp�����Z: ";
				cin>>tcs;
				while(tcs < 0 || tcs > 100)
				{
					cout<<"��J�����Z�n�b0~100����!!"<<endl;
					cout<<"�Э��s��J: ";
					cin>>tcs;
				}
				head->writecs(tcs);
				cout<<"�п�J�ǥͪ���ɦV���Z: ";
				cin>>too;
				while(too < 0 || too > 100)
				{
					cout<<"��J�����Z�n�b0~100����!!"<<endl;
					cout<<"�Э��s��J: ";
					cin>>too;
				}
				head->writeoo(too);
				head->writecptr(NULL);
				cout<<endl;
			}
			else
			{
				q = new CS;
				cout<<"�п�J�ǥͮy��: ";
				cin>>tno;
				while(tno <= 0)
				{
					cout<<"��J���y���n>0!!"<<endl;
					cout<<"�Э��s��J: ";
					cin>>tno;
				}
				q->writeno(tno);
				cout<<"�п�J�ǥͩm�W: ";
				cin.get();
				cin.getline(tname, 21);
				q->writename(tname);
				cout<<"�п�J�ǥͼƾǦ��Z: ";
				cin>>tmath;
				while(tmath < 0 || tmath > 100)
				{
					cout<<"��J�����Z�n�b0~100����!!"<<endl;
					cout<<"�Э��s��J: ";
					cin>>tmath;
				}
				q->writemath(tmath);
				cout<<"�п�J�ǥͭp�����Z: ";
				cin>>tcs;
				while(tcs < 0 || tcs > 100)
				{
					cout<<"��J�����Z�n�b0~100����!!"<<endl;
					cout<<"�Э��s��J: ";
					cin>>tcs;
				}
				q->writecs(tcs);
				cout<<"�п�J�ǥͪ���ɦV���Z: ";
				cin>>too;
				while(too < 0 || too > 100)
				{
					cout<<"��J�����Z�n�b0~100����!!"<<endl;
					cout<<"�Э��s��J: ";
					cin>>too;
				}
				q->writeoo(too);
				cout<<endl;
				f = NULL;
				p = head;
				while(p != NULL && p->readno() <= q->readno())
				{
					if(p->readno() == q->readno())
					{
						cout<<"��J���y���w�g�s�b!!"<<endl;
						cout<<"�Э��s���"<<endl;
						t = 0;
						cout<<endl;
						break;
					}
					f = p; //f�]��p����m 
					p = p->readcptr(); //p�]��U�@�� 
				}
				if(t == 1)
				{
					if(f == NULL) //q�̤p  
					{
						q->writecptr(head);
						head = q;
					}
					else //q�b�����γ̤j
					{
						f->writecptr(q);
						q->writecptr(p);
					}
				}
			}
		}
		if(n == 2)
		{
			cout<<"�R���ǥ͸�ư��椤"<<endl;
			cout<<endl;
			if(head == NULL)
			{
				cout<<"�S����ƥi�ѧR��!!"<<endl;
				cout<<"�Э��s���"<<endl;
				cout<<endl; 
			}
			else
			{
				cout<<"�п�J�n�R�����ǥͮy��: ";
				cin>>x;
				cout<<endl;
				f = NULL;
				p = head;
				while(p != NULL && p->readno() != x) //�S���ŦX���ܷ|����̫�@�� 
				{
					f = p; //f�]��p����m 
					p = p->readcptr(); //p�]��U�@�� 
				}
				if(p == NULL)
				{
					cout<<"�ӵ���Ƥ��s�b�A�L�k�R��"<<endl;
					cout<<"�Э��s���"<<endl;
					cout<<endl; 
				}
				else if(x == head->readno())
				{
					head = head->readcptr(); //�R���Ĥ@�� 
					cout<<"�ӵ���Ƥw�R��"<<endl;
					cout<<endl;
				}
				else
				{
					f->writecptr(p->readcptr()); //�R�������γ̤j�� 
					cout<<"�ӵ���Ƥw�R��"<<endl; 
					cout<<endl;
				}
			}
		} 
		if(n == 3)
		{
			cout<<"�C�L��C��ư��椤"<<endl;
			cout<<endl;
			if(head == NULL)
			{
				cout<<"head -> ||"<<endl;
				cout<<endl;
			}
			else
			{
				p = head;
				cout<<"head -> ";
				while(p != 0)
				{
					cout<<p->readno()<<" -> ";
					p = p->readcptr(); //����@�� 
				}
				cout<<"||"<<endl;
				cout<<endl;
			}
		}
		if(n == 4)
		{
			cout<<"���¨ϥ�~";
			break;
		}
	}
}
