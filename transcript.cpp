#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;

class Stnode
{
	protected:
		int no;
		char name[21];
		int math;
	public:
		Stnode() { no=0; math=0; }
		void writeno(int t)
		{
			no=t;
		}
		int readno()
		{
			return no;
		}
		void writename(char t[])
		{
			strcpy(name,t);
		}
		char *readname()
		{
			return name;
		}
		void writemath(int t)
		{
			math=t;
		}
		int readmath()
		{
			return math;
		}
};

class CS : public Stnode
{
	private:
		int cs;
		int oo;
		CS *cptr;
		int total;
	public:
		void writecs(int t)
		{
			cs=t;
		}
		int readcs()
		{
			return cs;
		}
		void writeoo(int t)
		{
			oo=t;
		}
		int readoo()
		{
			return oo;
		}
		void writecptr(CS *t)
		{
			cptr=t;
		}
		CS *readcptr()
		{
			return cptr;
		}
		void writetotal(int t)
		{
			total=t;
		}
		int readtotal()
		{
			return total;
		}
};

class MENU
{
	public:
		void menu()
		{
			cout<<"1.�s�W�ǥ͸��"<<endl;
			cout<<"2.�d�߾ǥ͸��"<<endl;
			cout<<"3.�ק�ǥ͸��"<<endl;
			cout<<"4.�R���ǥ͸��"<<endl;
			cout<<"5.�C�L���Z��"<<endl;
			cout<<"6.���}"<<endl; 
			cout<<"�п�J��ܶ���?";
		}
};

int main()
{
	CS *cq;
	CS *chead;
	CS *cf;
	CS *cp;
	CS ct[50];
	CS a[50];
	int tno;
	char tname[21];
	int tmath;
	int tcs;
	int too;
	int tpe;
	int ttotal;
	MENU m;
	int n,k,x,ccounter=0;
	chead=NULL;
	ifstream ci("student.txt", ios_base::in);
	if (ci)
	{
		while (ci>>tno&&!ci.eof())
		{
			if (chead==NULL)
			{
				chead=new CS;
				chead->writeno(tno);
				ci.get();
				ci.getline(tname,20);
				chead->writename(tname);
				ci>>tmath;
				chead->writemath(tmath);
				ci>>tcs;
				chead->writecs(tcs);
				ci>>too;
				chead->writeoo(too);
				chead->writecptr(NULL);
				ttotal=chead->readmath()+chead->readcs()+chead->readoo();
				chead->writetotal(ttotal);
				ccounter=ccounter+1;
			}
			else
			{
				cq=new CS;
				cq->writeno(tno);
				ci.get();
				ci.getline(tname,20);
				cq->writename(tname);
				ci>>tmath;
				cq->writemath(tmath);
				ci>>tcs;
				cq->writecs(tcs);
				ci>>too;
				cq->writeoo(too);
				cf=NULL;
				cp=chead;
				while (cp!=NULL)
				{
					cf=cp; //f�]��p����m 
					cp=cp->readcptr(); //p�]��U�@�� 
				}
				cf->writecptr(cq);
				cq->writecptr(cp);
				ttotal=cq->readmath()+cq->readcs()+cq->readoo();
				cq->writetotal(ttotal);
				ccounter=ccounter+1;
			}
			ci.get();
		}
	}
	ci.close();
	while (true)
	{
		m.menu();
		cin>>n;
		cout<<endl;
		if (n<1||n>6)
		{
			cout<<"��J���~!!"<<endl;
			cout<<"�Э��s���"<<endl;
			cout<<endl;
		}
		int t=1;
		if (n==1)
		{
			cout<<"�s�W�ǥ͸�ư��椤"<<endl;
			cout<<endl;
			if (chead==NULL)
			{
				chead=new CS;
				cout<<"�п�J�ǥͮy��:";
				cin>>tno;
				while (tno<=0)
				{
					cout<<"��J���y���n>0!!"<<endl;
					cout<<"�Э��s��J:";
					cin>>tno;
				}
				chead->writeno(tno);
				cout<<"�п�J�ǥͩm�W:";
				cin.get();
				cin.getline(tname,21);
				chead->writename(tname);
				cout<<"�п�J�ǥͼƾǦ��Z:";
				cin>>tmath;
				while (tmath<0||tmath>100)
				{
					cout<<"��J�����Z�n�b0~100����!!"<<endl;
					cout<<"�Э��s��J:";
					cin>>tmath;
				}
				chead->writemath(tmath);
				cout<<"�п�J�ǥͭp�����Z:";
				cin>>tcs;
				while (tcs<0||tcs>100)
				{
					cout<<"��J�����Z�n�b0~100����!!"<<endl;
					cout<<"�Э��s��J:";
					cin>>tcs;
				}
				chead->writecs(tcs);
				cout<<"�п�J�ǥͪ���ɦV���Z:";
				cin>>too;
				while (too<0||too>100)
				{
					cout<<"��J�����Z�n�b0~100����!!"<<endl;
					cout<<"�Э��s��J:";
					cin>>too;
				}
				chead->writeoo(too);
				chead->writecptr(NULL);
				ttotal=chead->readmath()+chead->readcs()+chead->readoo();
				chead->writetotal(ttotal);
				ccounter=ccounter+1;
				cout<<endl;
			}
			else
			{
				cq=new CS;
				cout<<"�п�J�ǥͮy��:";
				cin>>tno;
				while (tno<=0)
				{
					cout<<"��J���y���n>0!!"<<endl;
					cout<<"�Э��s��J:";
					cin>>tno;
				}
				cq->writeno(tno);
				cout<<"�п�J�ǥͩm�W:";
				cin.get();
				cin.getline(tname,21);
				cq->writename(tname);
				cout<<"�п�J�ǥͼƾǦ��Z:";
				cin>>tmath;
				while (tmath<0||tmath>100)
				{
					cout<<"��J�����Z�n�b0~100����!!"<<endl;
					cout<<"�Э��s��J:";
					cin>>tmath;
				}
				cq->writemath(tmath);
				cout<<"�п�J�ǥͭp�����Z:";
				cin>>tcs;
				while (tcs<0||tcs>100)
				{
					cout<<"��J�����Z�n�b0~100����!!"<<endl;
					cout<<"�Э��s��J:";
					cin>>tcs;
				}
				cq->writecs(tcs);
				cout<<"�п�J�ǥͪ���ɦV���Z:";
				cin>>too;
				while (too<0||too>100)
				{
					cout<<"��J�����Z�n�b0~100����!!"<<endl;
					cout<<"�Э��s��J:";
					cin>>too;
				}
				cq->writeoo(too);
				cout<<endl;
				cf=NULL;
				cp=chead;
				while (cp!=NULL&&cp->readno()<=cq->readno())
				{
					if (cp->readno()==cq->readno())
					{
						cout<<"��J���y���w�g�s�b!!"<<endl;
						cout<<"�Э��s���"<<endl;
						t=0;
						cout<<endl;
						break;
					}
					cf=cp; //f�]��p����m 
					cp=cp->readcptr(); //p�]��U�@�� 
				}
				if (t==1)
				{
					if (cf==NULL) //q�̤p  
					{
						cq->writecptr(chead);
						chead=cq;
					}
					else //q�b�����γ̤j
					{
						cf->writecptr(cq);
						cq->writecptr(cp);
					}
					ttotal=cq->readmath()+cq->readcs()+cq->readoo();
					cq->writetotal(ttotal);
					ccounter=ccounter+1; 
				}
			}
		}
		if (n==2)
		{
			cout<<"�d�߾ǥ͸�ư��椤"<<endl;
			cout<<endl;
			if (chead==NULL)
			{
				cout<<"�S����ƥi�Ѭd��!!"<<endl;
				cout<<"�Э��s���"<<endl;
				cout<<endl; 
			}
			else
			{
				cout<<"�п�J�n�d�ߪ��ǥͮy��:";
				cin>>x;
				cout<<endl;
				cf=NULL;
				cp=chead;
				while (cp!=NULL&&cp->readno()!=x) //�S���ŦX���ܷ|����̫�@�� 
				{
					cf=cp; //f�]��p����m 
					cp=cp->readcptr(); //p�]��U�@�� 
				}
				if (cp==NULL)
				{
					cout<<"�ӵ���Ƥ��s�b�A�L�k�d��"<<endl;
					cout<<"�Э��s���"<<endl;
					cout<<endl; 
				}
				else
				{
					cout<<"�y��:"<<cp->readno()<<endl;
					cout<<"�m�W:"<<cp->readname()<<endl;
					cout<<"�ƾǦ��Z:"<<cp->readmath()<<endl;
					cout<<"�p�����Z:"<<cp->readcs()<<endl;
					cout<<"����ɦV���Z:"<<cp->readoo()<<endl;
					cout<<endl;
				}
			}
		}
		if (n==3)
		{
			cout<<"�ק�ǥ͸�ư��椤"<<endl;
			cout<<endl;
			if (chead==NULL)
			{
				cout<<"�S����ƥi�ѭק�!!"<<endl;
				cout<<"�Э��s���"<<endl;
				cout<<endl; 
			}
			else
			{
				cout<<"�п�J�n�ק諸�ǥͮy��:";
				cin>>x;
				cout<<endl;
				cf=NULL;
				cp=chead;
				while (cp!=NULL&&cp->readno()!=x) //�S���ŦX���ܷ|����̫�@�� 
				{
					cf=cp; //f�]��p����m 
					cp=cp->readcptr(); //p�]��U�@�� 
				}
				if (cp==NULL)
				{
					cout<<"�ӵ���Ƥ��s�b�A�L�k�ק�"<<endl;
					cout<<"�Э��s���"<<endl;
					cout<<endl; 
				}
				else
				{
					cout<<"�п�J�ǥͩm�W:";
					cin.get();
					cin.getline(tname,21);
					cp->writename(tname);
					cout<<"�п�J�ǥͼƾǦ��Z:";
					cin>>tmath;
					while (tmath<0||tmath>100)
					{
						cout<<"��J�����Z�n�b0~100����!!"<<endl;
						cout<<"�Э��s��J:";
						cin>>tmath;
					}
					cp->writemath(tmath);
					cout<<"�п�J�ǥͭp�����Z:";
					cin>>tcs;
					while (tcs<0||tcs>100)
					{
						cout<<"��J�����Z�n�b0~100����!!"<<endl;
						cout<<"�Э��s��J:";
						cin>>tcs;
					}
					cp->writecs(tcs);
					cout<<"�п�J�ǥͪ���ɦV���Z:";
					cin>>too;
					while (too<0||too>100)
					{
						cout<<"��J�����Z�n�b0~100����!!"<<endl;
						cout<<"�Э��s��J:";
						cin>>too;
					}
					cp->writeoo(too);
					ttotal=cp->readmath()+cp->readcs()+cp->readoo();
					cp->writetotal(ttotal);
					cout<<endl;
				}
			}
		}
		if (n==4)
		{
			cout<<"�R���ǥ͸�ư��椤"<<endl;
			cout<<endl;
			if (chead==NULL)
			{
				cout<<"�S����ƥi�ѧR��!!"<<endl;
				cout<<"�Э��s���"<<endl;
				cout<<endl; 
			}
			else
			{
				cout<<"�п�J�n�R�����ǥͮy��:";
				cin>>x;
				cout<<endl;
				cf=NULL;
				cp=chead;
				while (cp!=NULL&&cp->readno()!=x) //�S���ŦX���ܷ|����̫�@�� 
				{
					cf=cp; //f�]��p����m 
					cp=cp->readcptr(); //p�]��U�@�� 
				}
				if (cp==NULL)
				{
					cout<<"�ӵ���Ƥ��s�b�A�L�k�R��"<<endl;
					cout<<"�Э��s���"<<endl;
					cout<<endl; 
				}
				else if (x==chead->readno())
				{
					chead=chead->readcptr(); //�R���Ĥ@�� 
					cout<<"�ӵ���Ƥw�R��"<<endl;
					ccounter=ccounter-1;
					cout<<endl;
				}
				else
				{
					cf->writecptr(cp->readcptr()); //�R�������γ̤j�� 
					cout<<"�ӵ���Ƥw�R��"<<endl;
					ccounter=ccounter-1; 
					cout<<endl;
				}
			}
		}
		if (n==5)
		{
			cout<<"�C�L���Z����椤"<<endl;
			cout<<endl;
			if (chead==NULL)
			{
				cout<<"�S����ƥi�ѦC�L!!"<<endl;
				cout<<"�Э��s���"<<endl;
				cout<<endl;
			}
			else
			{
				cp=chead;
				while (cp!=0)
				{
					for (int i=0;i<ccounter;i++)
					{
						ct[i]=*cp;
						cp=cp->readcptr();
					}
				}
				for (int i=0;i<ccounter-1;i++)
				{
					for (int j=0;j<ccounter-1;j++)
					{
						if (ct[j].readtotal()<ct[j+1].readtotal())
						{
							a[j]=ct[j];
							ct[j]=ct[j+1];
							ct[j+1]=a[j];
						}
					}
				}
				cout<<setw(4)<<"�y��\t";
				cout<<left<<setw(22)<<"�m�W";
				cout<<right<<setw(12)<<"�ƾǦ��Z";
				cout<<setw(12)<<"�p�����Z";
				cout<<setw(16)<<"����ɦV���Z";
				cout<<setw(8)<<"�`��"<<endl;
				for (int i=0;i<ccounter;i++)
				{
					cout<<setw(4)<<ct[i].readno()<<"\t";
					cout<<left<<setw(22)<<ct[i].readname();
					cout<<right<<setw(12)<<ct[i].readmath();
					cout<<setw(12)<<ct[i].readcs();
					cout<<setw(16)<<ct[i].readoo();
					cout<<setw(8)<<ct[i].readtotal()<<endl;
				}
				cout<<endl;
			}
		}
		if (n==6)
		{
			cout<<"���¨ϥ�~";
			break;
		}
	}
	cp=chead;
	ofstream co("student.txt", ios_base::out);
	while (cp!=0)
	{
		co<<cp->readno()<<endl;
		co<<cp->readname()<<endl;
		co<<cp->readmath()<<endl;
		co<<cp->readcs()<<endl;
		co<<cp->readoo()<<endl;
		cp=cp->readcptr();
	}
	co.close();
}
