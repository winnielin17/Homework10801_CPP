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
			cout<<"(1).新增學生資料"<<endl;
			cout<<"(2).刪除學生資料"<<endl;
			cout<<"(3).列印串列資料"<<endl;
			cout<<"(4).離開"<<endl; 
			cout<<"請輸入選擇項目: ";
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
			cout<<"輸入錯誤!!"<<endl;
			cout<<"請重新選擇"<<endl;
			cout<<endl;
		}
		int t = 1;
		if(n == 1)
		{
			cout<<"新增學生資料執行中"<<endl;
			cout<<endl;
			cout<<"請問要新增資科系還是體育系學生資料?"<<endl;
			cout<<"資科系請選1"<<endl;
			cout<<"體育系請選2"<<endl;
			cout<<"請輸入選擇項目: ";
			cin>>k;
			cout<<endl;
			while(k < 1 || k > 2)
			{
				cout<<"輸入錯誤!!"<<endl;
				cout<<"請重新選擇: ";
				cin>>k;
			}
			if(k == 1)
			{
				if(chead == NULL)
				{
					chead = new CS;
					cout<<"請輸入學生座號: ";
					cin>>tno;
					while(tno <= 0)
					{
						cout<<"輸入的座號要>0!!"<<endl;
						cout<<"請重新輸入: ";
						cin>>tno;
					}
					chead->writeno(tno);
					cout<<"請輸入學生姓名: ";
					cin.get();
					cin.getline(tname, 21);
					chead->writename(tname);
					cout<<"請輸入學生數學成績: ";
					cin>>tmath;
					while(tmath < 0 || tmath > 100)
					{
						cout<<"輸入的成績要在0~100之間!!"<<endl;
						cout<<"請重新輸入: ";
						cin>>tmath;
					}
					chead->writemath(tmath);
					cout<<"請輸入學生計概成績: ";
					cin>>tcs;
					while(tcs < 0 || tcs > 100)
					{
						cout<<"輸入的成績要在0~100之間!!"<<endl;
						cout<<"請重新輸入: ";
						cin>>tcs;
					}
					chead->writecs(tcs);
					cout<<"請輸入學生物件導向成績: ";
					cin>>too;
					while(too < 0 || too > 100)
					{
						cout<<"輸入的成績要在0~100之間!!"<<endl;
						cout<<"請重新輸入: ";
						cin>>too;
					}
					chead->writeoo(too);
					chead->writecptr(NULL);
					cout<<endl;
				}
				else
				{
					cq = new CS;
					cout<<"請輸入學生座號:";
					cin>>tno;
					while(tno <= 0)
					{
						cout<<"輸入的座號要>0!!"<<endl;
						cout<<"請重新輸入: ";
						cin>>tno;
					}
					cq->writeno(tno);
					cout<<"請輸入學生姓名: ";
					cin.get();
					cin.getline(tname, 21);
					cq->writename(tname);
					cout<<"請輸入學生數學成績: ";
					cin>>tmath;
					while(tmath < 0 || tmath > 100)
					{
						cout<<"輸入的成績要在0~100之間!!"<<endl;
						cout<<"請重新輸入: ";
						cin>>tmath;
					}
					cq->writemath(tmath);
					cout<<"請輸入學生計概成績: ";
					cin>>tcs;
					while(tcs < 0 || tcs > 100)
					{
						cout<<"輸入的成績要在0~100之間!!"<<endl;
						cout<<"請重新輸入: ";
						cin>>tcs;
					}
					cq->writecs(tcs);
					cout<<"請輸入學生物件導向成績: ";
					cin>>too;
					while(too < 0 || too > 100)
					{
						cout<<"輸入的成績要在0~100之間!!"<<endl;
						cout<<"請重新輸入: ";
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
							cout<<"輸入的座號已經存在!!"<<endl;
							cout<<"請重新選擇"<<endl;
							t = 0;
							cout<<endl;
							break;
						}
						cf = cp; //f跑到p的位置 
						cp = cp->readcptr(); //p跑到下一個 
					}
					if(t == 1)
					{
						if(cf == NULL) //q最小  
						{
							cq->writecptr(chead);
							chead = cq;
						}
						else //q在中間或最大
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
					cout<<"請輸入學生座號: ";
					cin>>tno;
					while(tno <= 0)
					{
						cout<<"輸入的座號要>0!!"<<endl;
						cout<<"請重新輸入: ";
						cin>>tno;
					}
					phead->writeno(tno);
					cout<<"請輸入學生姓名: ";
					cin.get();
					cin.getline(tname, 21);
					phead->writename(tname);
					cout<<"請輸入學生數學成績: ";
					cin>>tmath;
					while(tmath < 0 || tmath > 100)
					{
						cout<<"輸入的成績要在0~100之間!!"<<endl;
						cout<<"請重新輸入: ";
						cin>>tmath;
					}
					phead->writemath(tmath);
					cout<<"請輸入學生體育成績: ";
					cin>>tpe;
					while(tpe < 0 || tpe > 100)
					{
						cout<<"輸入的成績要在0~100之間!!"<<endl;
						cout<<"請重新輸入: ";
						cin>>tpe;
					}
					phead->writepe(tpe);
					phead->writepptr(NULL);
					cout<<endl;
				}
				else
				{
					pq = new PE;
					cout<<"請輸入學生座號: ";
					cin>>tno;
					while(tno <= 0)
					{
						cout<<"輸入的座號要>0!!"<<endl;
						cout<<"請重新輸入: ";
						cin>>tno;
					}
					pq->writeno(tno);
					cout<<"請輸入學生姓名: ";
					cin.get();
					cin.getline(tname, 21);
					pq->writename(tname);
					cout<<"請輸入學生數學成績: ";
					cin>>tmath;
					while(tmath < 0 || tmath > 100)
					{
						cout<<"輸入的成績要在0~100之間!!"<<endl;
						cout<<"請重新輸入: ";
						cin>>tmath;
					}
					pq->writemath(tmath);
					cout<<"請輸入學生體育成績: ";
					cin>>tpe;
					while(tpe < 0 || tpe > 100)
					{
						cout<<"輸入的成績要在0~100之間!!"<<endl;
						cout<<"請重新輸入: ";
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
							cout<<"輸入的座號已經存在!!"<<endl;
							cout<<"請重新選擇"<<endl;
							t = 0;
							cout<<endl;
							break;
						}
						pf = pp; //f跑到p的位置 
						pp = pp->readpptr(); //p跑到下一個 
					}
					if(t == 1)
					{
						if(pf == NULL) //q最小  
						{
							pq->writepptr(phead);
							phead = pq;
						}
						else //q在中間或最大
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
			cout<<"刪除學生資料執行中"<<endl;
			cout<<endl;
			cout<<"請問要刪除資科系還是體育系學生資料?"<<endl;
			cout<<"資科系請選1"<<endl;
			cout<<"體育系請選2"<<endl;
			cout<<"請輸入選擇項目: ";
			cin>>k;
			cout<<endl;
			while(k < 1 || k > 2)
			{
				cout<<"輸入錯誤!!"<<endl;
				cout<<"請重新選擇: ";
				cin>>k;
			}
			if(k == 1)
			{
				if(chead == NULL)
				{
					cout<<"沒有資料可供刪除!!"<<endl;
					cout<<"請重新選擇"<<endl;
					cout<<endl; 
				}
				else
				{
					cout<<"請輸入要刪除的學生座號: ";
					cin>>x;
					cout<<endl;
					cf = NULL;
					cp = chead;
					while(cp != NULL && cp->readno() != x) //沒有符合的話會跳到最後一個 
					{
						cf = cp; //f跑到p的位置 
						cp = cp->readcptr(); //p跑到下一個 
					}
					if(cp == NULL)
					{
						cout<<"該筆資料不存在，無法刪除"<<endl;
						cout<<"請重新選擇"<<endl;
						cout<<endl; 
					}
					else if(x == chead->readno())
					{
						chead = chead->readcptr(); //刪掉第一個 
						cout<<"該筆資料已刪除"<<endl;
						cout<<endl;
					}
					else
					{
						cf->writecptr(cp->readcptr()); //刪掉中間或最大的 
						cout<<"該筆資料已刪除"<<endl; 
						cout<<endl;
					}
				}
			}
			if(k == 2)
			{
				if(phead == NULL)
				{
					cout<<"沒有資料可供刪除!!"<<endl;
					cout<<"請重新選擇"<<endl;
					cout<<endl; 
				}
				else
				{
					cout<<"請輸入要刪除的學生座號: ";
					cin>>x;
					cout<<endl;
					pf = NULL;
					pp = phead;
					while(pp != NULL && pp->readno() != x) //沒有符合的話會跳到最後一個 
					{
						pf = pp; //f跑到p的位置 
						pp = pp->readpptr(); //p跑到下一個 
					}
					if(pp == NULL)
					{
						cout<<"該筆資料不存在，無法刪除"<<endl;
						cout<<"請重新選擇"<<endl;
						cout<<endl; 
					}
					else if(x == phead->readno())
					{
						phead = phead->readpptr(); //刪掉第一個 
						cout<<"該筆資料已刪除"<<endl;
						cout<<endl;
					}
					else
					{
						pf->writepptr(pp->readpptr()); //刪掉中間或最大的 
						cout<<"該筆資料已刪除"<<endl; 
						cout<<endl;
					}
				}
			}
		}
		if(n == 3)
		{
			cout<<"列印串列資料執行中"<<endl;
			cout<<endl;
			cout<<"請問要列印資科系還是體育系學生資料?"<<endl;
			cout<<"資科系請選1"<<endl;
			cout<<"體育系請選2"<<endl;
			cout<<"請輸入選擇項目: ";
			cin>>k;
			cout<<endl;
			while(k < 1 || k > 2)
			{
				cout<<"輸入錯誤!!"<<endl;
				cout<<"請重新選擇: ";
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
						cp = cp->readcptr(); //往後一個 
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
						pp = pp->readpptr(); //往後一個 
					}
					cout<<"||"<<endl;
					cout<<endl;
				}
			}
		}
		if(n == 4)
		{
			cout<<"謝謝使用~";
			break;
		}
	}
}
