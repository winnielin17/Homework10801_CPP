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
	CS *chead, *cq, *cf, *cp;
	PE *phead, *pq, *pf, *pp;
	int tno;
	char tname[21];
	int tmath, tcs, too, tpe;
	MENU m;
	int n, k, x;
	chead = NULL;
	phead = NULL;
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
			cout<<"�аݭn�s�W���t�٬O��|�t�ǥ͸��?"<<endl;
			cout<<"���t�п�1"<<endl;
			cout<<"��|�t�п�2"<<endl;
			cout<<"�п�J��ܶ���: ";
			cin>>k;
			cout<<endl;
			while(k < 1 || k > 2)
			{
				cout<<"��J���~!!"<<endl;
				cout<<"�Э��s���: ";
				cin>>k;
			}
			if(k == 1)
			{
				if(chead == NULL)
				{
					chead = new CS;
					cout<<"�п�J�ǥͮy��: ";
					cin>>tno;
					while(tno <= 0)
					{
						cout<<"��J���y���n>0!!"<<endl;
						cout<<"�Э��s��J: ";
						cin>>tno;
					}
					chead->writeno(tno);
					cout<<"�п�J�ǥͩm�W: ";
					cin.get();
					cin.getline(tname, 21);
					chead->writename(tname);
					cout<<"�п�J�ǥͼƾǦ��Z: ";
					cin>>tmath;
					while(tmath < 0 || tmath > 100)
					{
						cout<<"��J�����Z�n�b0~100����!!"<<endl;
						cout<<"�Э��s��J: ";
						cin>>tmath;
					}
					chead->writemath(tmath);
					cout<<"�п�J�ǥͭp�����Z: ";
					cin>>tcs;
					while(tcs < 0 || tcs > 100)
					{
						cout<<"��J�����Z�n�b0~100����!!"<<endl;
						cout<<"�Э��s��J: ";
						cin>>tcs;
					}
					chead->writecs(tcs);
					cout<<"�п�J�ǥͪ���ɦV���Z: ";
					cin>>too;
					while(too < 0 || too > 100)
					{
						cout<<"��J�����Z�n�b0~100����!!"<<endl;
						cout<<"�Э��s��J: ";
						cin>>too;
					}
					chead->writeoo(too);
					chead->writecptr(NULL);
					cout<<endl;
				}
				else
				{
					cq = new CS;
					cout<<"�п�J�ǥͮy��:";
					cin>>tno;
					while(tno <= 0)
					{
						cout<<"��J���y���n>0!!"<<endl;
						cout<<"�Э��s��J: ";
						cin>>tno;
					}
					cq->writeno(tno);
					cout<<"�п�J�ǥͩm�W: ";
					cin.get();
					cin.getline(tname, 21);
					cq->writename(tname);
					cout<<"�п�J�ǥͼƾǦ��Z: ";
					cin>>tmath;
					while(tmath < 0 || tmath > 100)
					{
						cout<<"��J�����Z�n�b0~100����!!"<<endl;
						cout<<"�Э��s��J: ";
						cin>>tmath;
					}
					cq->writemath(tmath);
					cout<<"�п�J�ǥͭp�����Z: ";
					cin>>tcs;
					while(tcs < 0 || tcs > 100)
					{
						cout<<"��J�����Z�n�b0~100����!!"<<endl;
						cout<<"�Э��s��J: ";
						cin>>tcs;
					}
					cq->writecs(tcs);
					cout<<"�п�J�ǥͪ���ɦV���Z: ";
					cin>>too;
					while(too < 0 || too > 100)
					{
						cout<<"��J�����Z�n�b0~100����!!"<<endl;
						cout<<"�Э��s��J: ";
						cin>>too;
					}
					cq->writeoo(too);
					cout<<endl;
					cf = NULL;
					cp = chead;
					while(cp != NULL && cp->readno() <= cq->readno())
					{
						if(cp->readno() == cq->readno())
						{
							cout<<"��J���y���w�g�s�b!!"<<endl;
							cout<<"�Э��s���"<<endl;
							t = 0;
							cout<<endl;
							break;
						}
						cf = cp; //f�]��p����m 
						cp = cp->readcptr(); //p�]��U�@�� 
					}
					if(t == 1)
					{
						if(cf == NULL) //q�̤p  
						{
							cq->writecptr(chead);
							chead = cq;
						}
						else //q�b�����γ̤j
						{
							cf->writecptr(cq);
							cq->writecptr(cp);
						}
					}
				}
			}
			if(k == 2)
			{
				if(phead == NULL)
				{
					phead = new PE;
					cout<<"�п�J�ǥͮy��: ";
					cin>>tno;
					while(tno <= 0)
					{
						cout<<"��J���y���n>0!!"<<endl;
						cout<<"�Э��s��J: ";
						cin>>tno;
					}
					phead->writeno(tno);
					cout<<"�п�J�ǥͩm�W: ";
					cin.get();
					cin.getline(tname, 21);
					phead->writename(tname);
					cout<<"�п�J�ǥͼƾǦ��Z: ";
					cin>>tmath;
					while(tmath < 0 || tmath > 100)
					{
						cout<<"��J�����Z�n�b0~100����!!"<<endl;
						cout<<"�Э��s��J: ";
						cin>>tmath;
					}
					phead->writemath(tmath);
					cout<<"�п�J�ǥ���|���Z: ";
					cin>>tpe;
					while(tpe < 0 || tpe > 100)
					{
						cout<<"��J�����Z�n�b0~100����!!"<<endl;
						cout<<"�Э��s��J: ";
						cin>>tpe;
					}
					phead->writepe(tpe);
					phead->writepptr(NULL);
					cout<<endl;
				}
				else
				{
					pq = new PE;
					cout<<"�п�J�ǥͮy��: ";
					cin>>tno;
					while(tno <= 0)
					{
						cout<<"��J���y���n>0!!"<<endl;
						cout<<"�Э��s��J: ";
						cin>>tno;
					}
					pq->writeno(tno);
					cout<<"�п�J�ǥͩm�W: ";
					cin.get();
					cin.getline(tname, 21);
					pq->writename(tname);
					cout<<"�п�J�ǥͼƾǦ��Z: ";
					cin>>tmath;
					while(tmath < 0 || tmath > 100)
					{
						cout<<"��J�����Z�n�b0~100����!!"<<endl;
						cout<<"�Э��s��J: ";
						cin>>tmath;
					}
					pq->writemath(tmath);
					cout<<"�п�J�ǥ���|���Z: ";
					cin>>tpe;
					while(tpe < 0 || tpe > 100)
					{
						cout<<"��J�����Z�n�b0~100����!!"<<endl;
						cout<<"�Э��s��J: ";
						cin>>tpe;
					}
					pq->writepe(tpe);
					cout<<endl;
					pf = NULL;
					pp = phead;
					while(pp != NULL && pp->readno() <= pq->readno())
					{
						if(pp->readno() == pq->readno())
						{
							cout<<"��J���y���w�g�s�b!!"<<endl;
							cout<<"�Э��s���"<<endl;
							t = 0;
							cout<<endl;
							break;
						}
						pf = pp; //f�]��p����m 
						pp = pp->readpptr(); //p�]��U�@�� 
					}
					if(t == 1)
					{
						if(pf == NULL) //q�̤p  
						{
							pq->writepptr(phead);
							phead = pq;
						}
						else //q�b�����γ̤j
						{
							pf->writepptr(pq);
							pq->writepptr(pp);
						}
					}
				}
			}
		}
		if(n == 2)
		{
			cout<<"�R���ǥ͸�ư��椤"<<endl;
			cout<<endl;
			cout<<"�аݭn�R�����t�٬O��|�t�ǥ͸��?"<<endl;
			cout<<"���t�п�1"<<endl;
			cout<<"��|�t�п�2"<<endl;
			cout<<"�п�J��ܶ���: ";
			cin>>k;
			cout<<endl;
			while(k < 1 || k > 2)
			{
				cout<<"��J���~!!"<<endl;
				cout<<"�Э��s���: ";
				cin>>k;
			}
			if(k == 1)
			{
				if(chead == NULL)
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
					cf = NULL;
					cp = chead;
					while(cp != NULL && cp->readno() != x) //�S���ŦX���ܷ|����̫�@�� 
					{
						cf = cp; //f�]��p����m 
						cp = cp->readcptr(); //p�]��U�@�� 
					}
					if(cp == NULL)
					{
						cout<<"�ӵ���Ƥ��s�b�A�L�k�R��"<<endl;
						cout<<"�Э��s���"<<endl;
						cout<<endl; 
					}
					else if(x == chead->readno())
					{
						chead = chead->readcptr(); //�R���Ĥ@�� 
						cout<<"�ӵ���Ƥw�R��"<<endl;
						cout<<endl;
					}
					else
					{
						cf->writecptr(cp->readcptr()); //�R�������γ̤j�� 
						cout<<"�ӵ���Ƥw�R��"<<endl; 
						cout<<endl;
					}
				}
			}
			if(k == 2)
			{
				if(phead == NULL)
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
					pf = NULL;
					pp = phead;
					while(pp != NULL && pp->readno() != x) //�S���ŦX���ܷ|����̫�@�� 
					{
						pf = pp; //f�]��p����m 
						pp = pp->readpptr(); //p�]��U�@�� 
					}
					if(pp == NULL)
					{
						cout<<"�ӵ���Ƥ��s�b�A�L�k�R��"<<endl;
						cout<<"�Э��s���"<<endl;
						cout<<endl; 
					}
					else if(x == phead->readno())
					{
						phead = phead->readpptr(); //�R���Ĥ@�� 
						cout<<"�ӵ���Ƥw�R��"<<endl;
						cout<<endl;
					}
					else
					{
						pf->writepptr(pp->readpptr()); //�R�������γ̤j�� 
						cout<<"�ӵ���Ƥw�R��"<<endl; 
						cout<<endl;
					}
				}
			}
		}
		if(n == 3)
		{
			cout<<"�C�L��C��ư��椤"<<endl;
			cout<<endl;
			cout<<"�аݭn�C�L���t�٬O��|�t�ǥ͸��?"<<endl;
			cout<<"���t�п�1"<<endl;
			cout<<"��|�t�п�2"<<endl;
			cout<<"�п�J��ܶ���: ";
			cin>>k;
			cout<<endl;
			while(k < 1 || k > 2)
			{
				cout<<"��J���~!!"<<endl;
				cout<<"�Э��s���: ";
				cin>>k;
			}
			if(k == 1)
			{
				if(chead == NULL)
				{
					cout<<"head -> ||"<<endl;
					cout<<endl;
				}
				else
				{
					cp = chead;
					cout<<"head -> ";
					while(cp != 0)
					{
						cout<<cp->readno()<<" -> ";
						cp = cp->readcptr(); //����@�� 
					}
					cout<<"||"<<endl;
					cout<<endl;
				}
			}
			if(k == 2)
			{
				if(phead == NULL)
				{
					cout<<"head -> ||"<<endl;
					cout<<endl;
				}
				else
				{
					pp = phead;
					cout<<"head -> ";
					while(pp != 0)
					{
						cout<<pp->readno()<<" -> ";
						pp = pp->readpptr(); //����@�� 
					}
					cout<<"||"<<endl;
					cout<<endl;
				}
			}
		}
		if(n == 4)
		{
			cout<<"���¨ϥ�~";
			break;
		}
	}
}
