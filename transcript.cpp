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
			cout<<"1.新增學生資料"<<endl;
			cout<<"2.查詢學生資料"<<endl;
			cout<<"3.修改學生資料"<<endl;
			cout<<"4.刪除學生資料"<<endl;
			cout<<"5.列印成績單"<<endl;
			cout<<"6.離開"<<endl; 
			cout<<"請輸入選擇項目?";
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
					cf=cp; //f跑到p的位置 
					cp=cp->readcptr(); //p跑到下一個 
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
			cout<<"輸入錯誤!!"<<endl;
			cout<<"請重新選擇"<<endl;
			cout<<endl;
		}
		int t=1;
		if (n==1)
		{
			cout<<"新增學生資料執行中"<<endl;
			cout<<endl;
			if (chead==NULL)
			{
				chead=new CS;
				cout<<"請輸入學生座號:";
				cin>>tno;
				while (tno<=0)
				{
					cout<<"輸入的座號要>0!!"<<endl;
					cout<<"請重新輸入:";
					cin>>tno;
				}
				chead->writeno(tno);
				cout<<"請輸入學生姓名:";
				cin.get();
				cin.getline(tname,21);
				chead->writename(tname);
				cout<<"請輸入學生數學成績:";
				cin>>tmath;
				while (tmath<0||tmath>100)
				{
					cout<<"輸入的成績要在0~100之間!!"<<endl;
					cout<<"請重新輸入:";
					cin>>tmath;
				}
				chead->writemath(tmath);
				cout<<"請輸入學生計概成績:";
				cin>>tcs;
				while (tcs<0||tcs>100)
				{
					cout<<"輸入的成績要在0~100之間!!"<<endl;
					cout<<"請重新輸入:";
					cin>>tcs;
				}
				chead->writecs(tcs);
				cout<<"請輸入學生物件導向成績:";
				cin>>too;
				while (too<0||too>100)
				{
					cout<<"輸入的成績要在0~100之間!!"<<endl;
					cout<<"請重新輸入:";
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
				cout<<"請輸入學生座號:";
				cin>>tno;
				while (tno<=0)
				{
					cout<<"輸入的座號要>0!!"<<endl;
					cout<<"請重新輸入:";
					cin>>tno;
				}
				cq->writeno(tno);
				cout<<"請輸入學生姓名:";
				cin.get();
				cin.getline(tname,21);
				cq->writename(tname);
				cout<<"請輸入學生數學成績:";
				cin>>tmath;
				while (tmath<0||tmath>100)
				{
					cout<<"輸入的成績要在0~100之間!!"<<endl;
					cout<<"請重新輸入:";
					cin>>tmath;
				}
				cq->writemath(tmath);
				cout<<"請輸入學生計概成績:";
				cin>>tcs;
				while (tcs<0||tcs>100)
				{
					cout<<"輸入的成績要在0~100之間!!"<<endl;
					cout<<"請重新輸入:";
					cin>>tcs;
				}
				cq->writecs(tcs);
				cout<<"請輸入學生物件導向成績:";
				cin>>too;
				while (too<0||too>100)
				{
					cout<<"輸入的成績要在0~100之間!!"<<endl;
					cout<<"請重新輸入:";
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
						cout<<"輸入的座號已經存在!!"<<endl;
						cout<<"請重新選擇"<<endl;
						t=0;
						cout<<endl;
						break;
					}
					cf=cp; //f跑到p的位置 
					cp=cp->readcptr(); //p跑到下一個 
				}
				if (t==1)
				{
					if (cf==NULL) //q最小  
					{
						cq->writecptr(chead);
						chead=cq;
					}
					else //q在中間或最大
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
			cout<<"查詢學生資料執行中"<<endl;
			cout<<endl;
			if (chead==NULL)
			{
				cout<<"沒有資料可供查詢!!"<<endl;
				cout<<"請重新選擇"<<endl;
				cout<<endl; 
			}
			else
			{
				cout<<"請輸入要查詢的學生座號:";
				cin>>x;
				cout<<endl;
				cf=NULL;
				cp=chead;
				while (cp!=NULL&&cp->readno()!=x) //沒有符合的話會跳到最後一個 
				{
					cf=cp; //f跑到p的位置 
					cp=cp->readcptr(); //p跑到下一個 
				}
				if (cp==NULL)
				{
					cout<<"該筆資料不存在，無法查詢"<<endl;
					cout<<"請重新選擇"<<endl;
					cout<<endl; 
				}
				else
				{
					cout<<"座號:"<<cp->readno()<<endl;
					cout<<"姓名:"<<cp->readname()<<endl;
					cout<<"數學成績:"<<cp->readmath()<<endl;
					cout<<"計概成績:"<<cp->readcs()<<endl;
					cout<<"物件導向成績:"<<cp->readoo()<<endl;
					cout<<endl;
				}
			}
		}
		if (n==3)
		{
			cout<<"修改學生資料執行中"<<endl;
			cout<<endl;
			if (chead==NULL)
			{
				cout<<"沒有資料可供修改!!"<<endl;
				cout<<"請重新選擇"<<endl;
				cout<<endl; 
			}
			else
			{
				cout<<"請輸入要修改的學生座號:";
				cin>>x;
				cout<<endl;
				cf=NULL;
				cp=chead;
				while (cp!=NULL&&cp->readno()!=x) //沒有符合的話會跳到最後一個 
				{
					cf=cp; //f跑到p的位置 
					cp=cp->readcptr(); //p跑到下一個 
				}
				if (cp==NULL)
				{
					cout<<"該筆資料不存在，無法修改"<<endl;
					cout<<"請重新選擇"<<endl;
					cout<<endl; 
				}
				else
				{
					cout<<"請輸入學生姓名:";
					cin.get();
					cin.getline(tname,21);
					cp->writename(tname);
					cout<<"請輸入學生數學成績:";
					cin>>tmath;
					while (tmath<0||tmath>100)
					{
						cout<<"輸入的成績要在0~100之間!!"<<endl;
						cout<<"請重新輸入:";
						cin>>tmath;
					}
					cp->writemath(tmath);
					cout<<"請輸入學生計概成績:";
					cin>>tcs;
					while (tcs<0||tcs>100)
					{
						cout<<"輸入的成績要在0~100之間!!"<<endl;
						cout<<"請重新輸入:";
						cin>>tcs;
					}
					cp->writecs(tcs);
					cout<<"請輸入學生物件導向成績:";
					cin>>too;
					while (too<0||too>100)
					{
						cout<<"輸入的成績要在0~100之間!!"<<endl;
						cout<<"請重新輸入:";
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
			cout<<"刪除學生資料執行中"<<endl;
			cout<<endl;
			if (chead==NULL)
			{
				cout<<"沒有資料可供刪除!!"<<endl;
				cout<<"請重新選擇"<<endl;
				cout<<endl; 
			}
			else
			{
				cout<<"請輸入要刪除的學生座號:";
				cin>>x;
				cout<<endl;
				cf=NULL;
				cp=chead;
				while (cp!=NULL&&cp->readno()!=x) //沒有符合的話會跳到最後一個 
				{
					cf=cp; //f跑到p的位置 
					cp=cp->readcptr(); //p跑到下一個 
				}
				if (cp==NULL)
				{
					cout<<"該筆資料不存在，無法刪除"<<endl;
					cout<<"請重新選擇"<<endl;
					cout<<endl; 
				}
				else if (x==chead->readno())
				{
					chead=chead->readcptr(); //刪掉第一個 
					cout<<"該筆資料已刪除"<<endl;
					ccounter=ccounter-1;
					cout<<endl;
				}
				else
				{
					cf->writecptr(cp->readcptr()); //刪掉中間或最大的 
					cout<<"該筆資料已刪除"<<endl;
					ccounter=ccounter-1; 
					cout<<endl;
				}
			}
		}
		if (n==5)
		{
			cout<<"列印成績單執行中"<<endl;
			cout<<endl;
			if (chead==NULL)
			{
				cout<<"沒有資料可供列印!!"<<endl;
				cout<<"請重新選擇"<<endl;
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
				cout<<setw(4)<<"座號\t";
				cout<<left<<setw(22)<<"姓名";
				cout<<right<<setw(12)<<"數學成績";
				cout<<setw(12)<<"計概成績";
				cout<<setw(16)<<"物件導向成績";
				cout<<setw(8)<<"總分"<<endl;
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
			cout<<"謝謝使用~";
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
