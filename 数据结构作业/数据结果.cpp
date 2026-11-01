#include <malloc.h>
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct node
{
	ElemType data;		//数据域
	struct node* next;	//指针域
} SLinkNode;				//单链表类型
void InitList(SLinkNode*& L)				//L作为引用型参数
{
	L = (SLinkNode*)malloc(sizeof(SLinkNode));	//创建头结点*L
	L->next = NULL;
}
void DestroyList(SLinkNode*& L)
{
	SLinkNode* pre = L, * p = pre->next;
	while (p != NULL)
	{	
		SLinkNode* q = p->next;
		free(q);
		p = q;
	}
	free(pre);
}
int GetLength(SLinkNode* L)
{
	int i = 0;
	SLinkNode* p = L->next;
	while (p != NULL)
	{	
		i++;
		p = p->next;
	}
	return i;
}
int GetElem(SLinkNode* L, int i, ElemType& e)//得到第i个元素存在e中
{
	int j = 0;
	SLinkNode* p = L;				//p指向头结点，计数器j置为0
	if (i <= 0) return 0;		//参数i错误返回0
	while (p != NULL && j < i)
	{	
		j++;
		p = p->next;
	}
	if (p == NULL)
		return 0;				//未找到返回0
	else
	{
		e = p->data;
		return 1;				//找到后返回1
	}
}
int Locate(SLinkNode* L, ElemType e)
{
	SLinkNode* p = L->next;
	int j = 1;						//p指向第一个数据结点，j置为其序号1
	while (p != NULL && p->data != e)
	{	//增加代码
		j++;
		p = p->next;
	}
	if (p == NULL) return(0);			//未找到返回0
	else return(j);					//找到后返回其序号
}
int InsElem(SLinkNode*& L, ElemType x, int i)	//插入结点值为x的结点
{
	int j = 0;
	SLinkNode* p = L, * s;
	if (i <= 0) return 0;			//参数i错误返回0
	while (p != NULL && j < i - 1)	//查找第i-1个结点*p
	{	//增加代码
		p = p->next;
		j++;
	}
	if (p == NULL)
		return 0;				//未找到第i-1个结点时返回0
	else						//找到第i-1个结点*p
	{
		s = (SLinkNode*)malloc(sizeof(SLinkNode));
		s->data = x;				//创建存放元素x的新结点*s
		//增加代码    将*s结点插入到*p结点之后
		s->next = p->next;
		p->next = s;
		return 1;				//插入运算成功,返回1
	}
}
int DelElem(SLinkNode*& L, int i)	//删除结点
{
	int j = 0;
	SLinkNode* p = L, * q;
	if (i <= 0) return 0;			//参数i错误返回0
	while (p != NULL && j < i - 1)	//查找第i-1个结点
	{	
		j++;
		p = p->next;
	}
	if (p == NULL)
		return 0;				//未找到第i-1个结点时返回0
	else						//找到第i-1个结点*p
	{
		q = p->next;				//q指向被删结点
		if (q == NULL)
			return 0;			//没有第i个结点时返回0
		else
		{	//增加代码    从单链表中删除*q结点
			p->next = q->next;
			free(q);			//释放其空间
			return 1;
		}
	}
}
void DispList(SLinkNode* L)		//输出单链表
{
	SLinkNode* p = L->next;
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

//采用头插法建表的算法
void CreateListF(SLinkNode*& L, ElemType a[], int n)
{
	SLinkNode* s;  int i;
	L = (SLinkNode*)malloc(sizeof(SLinkNode));		//创建头结点
	L->next = NULL;			//头结点的next域置空，表示一个空单链表
	for (i = 0; i < n; i++)		//遍历a数组所有元素
	{
		//增加代码
		s = (SLinkNode*)malloc(sizeof(SLinkNode));
		s->data = a[i];
		s->next = L->next;
		L->next = s;
	}
}
//采用尾插法建表的算法
void CreateListR(SLinkNode*& L, ElemType a[], int n)
{
	SLinkNode* s, * tc;  int i;
	L = (SLinkNode*)malloc(sizeof(SLinkNode));	//创建头结点
	tc = L;						//tc始终指向尾结点,开始时指向头结点
	//增加代码
	for (int i = 0; i < n; i++) {
		s = (SLinkNode*)malloc(sizeof(SLinkNode));
		s->data = a[i];
		tc->next = s;
		tc = s;
	}
	tc->next = NULL;				//尾结点next域置为NULL

}
void Reverse1(SLinkNode*& L)
{
	SLinkNode* pre = NULL;
	SLinkNode* p = L->next;
	SLinkNode* post = p->next;
	while (post != NULL)
	{
		p->next = pre;
		pre = p;
		p = post;
		post = post->next;
	}
	p->next = pre;
	L->next = p;
}

void Merge(SLinkNode* ha, SLinkNode* hb, SLinkNode*& hc)
{
	SLinkNode* pa = ha->next, * pb = hb->next, * tc;
	hc = ha;						//将ha的头结点用作hc的头结点
	tc = hc;						//tc总是指向结果单链表的尾结点
	free(hb);					//释放hb的头结点
	while (pa != NULL && pb != NULL)
	{
		if (pa->data < pb->data)
		{	//将pa结点链接到tc结点之后
			tc->next = pa;
			tc = pa;
			pa = pa->next;
		}
		else if (pa->data > pb->data)
		{	//将pb结点链接到tc结点之后
			tc->next = pb;
			tc = pb;
			pb = pb->next;
		}
	}
	tc->next = NULL;
	if (pa != NULL) tc->next = pa;	//ha单链表没有扫描完时
	if (pb != NULL) tc->next = pb;	//hb单链表没有扫描完时
}

void main()
{
	cout << " 241400003617  安晨阳  实验二\n";
	//增加代码
	SLinkNode* La, *Lb, *Lc;
	ElemType e;
	int a[] = { 11, 13, 15, 17, 19, 21 };
	int b[] = { 12, 14, 16, 18 };
	int len;
	CreateListR(La, a, 6);
	cout << "有序单链表ha ： ";
	DispList(La);

	CreateListR(Lb, b, 4);
	cout << "有序单链表hb ： ";
	DispList(Lb);

	Merge(La, Lb, Lc);
	cout << "合并后的单链表hc ：";
	DispList(Lc);
}
