////#include "SqList.cpp"
//#include <stdio.h>
//#include<bits/stdc++.h>
//using namespace std;
//
//#define MaxSize 100
//typedef int ElemType;//假设顺序表中所有元素为int类型
//typedef struct
//{
//	ElemType data[MaxSize];		//存放顺序表的元素
//	int length;					//顺序表的实际长度
//} SqList;						//顺序表类型
////初始化线性表
//void InitList(SqList*& L)	//由于L要回传给值参，所以用引用类型
//{
//	L = (SqList*)malloc(sizeof(SqList));
//	L->length = 0;
//}
////销毁 ： 释放线性表L 所占空间
//
//void DestroyList(SqList*& L)
//{
//	free(L);
//}
////求长度
//
//int GetLength(SqList* L)
//{
//	return L->length;
//}
////用 e 返回 L 中第 i 个元素的值
//
//int GetElem(SqList* L, int i, ElemType& e)
//{
//	if (i<1 || i>L->length)		//无效的i值
//		return 0;
//	else
//	{
//		e = L->data[i - 1];
//		return 1;
//	}
//}
//int Locate(SqList L, ElemType x)
//{
//	int i = 0;
//	while (i < L.length&& L.data[i] != x)
//		i++; 	//查找值为x的第1个元素,查找范围为0～L.length-1
//	if (i >= L.length) return(0);	//未找到返回0
//	else return(i + 1);			//找到后返回其逻辑序号
//}
////添加x到第i个位置
//
//int InsElem(SqList*& L, ElemType x, int i)
//{
//	int j;
//	if (i<1 || i>L->length + 1)		//无效的参数i
//		return 0;
//	i--;
//	for (j = L->length; j > i; j--) //		将		data[i..n]		元素后移一个位置
//		L->data[j] = L->data[j - 1];
//	L->data[i] = x;
//	//插入元素x
//	L->length++;
//	return 1;
//}
////删除第i个元素
//
//int DelElem(SqList*& L, int i)
//{
//	int j;
//	if (i<1 || i>L->length)			//无效的参数i
//		return 0;
//	i--;
//	for (j = i; j < L->length - 1; j++) {
//		L->data[j] = L->data[j + 1];
//	}
//
//	L->length--;		//线性表长度减1
//	return 1;
//}
//void DispList(SqList L)
//{
//	int i;
//	for (i = 0; i < L.length; i++)
//		printf("%d ", L.data[i]);
//	printf("\n");
//}
//void CreateList(SqList*& L, ElemType a[], int n)
//{
//	int i = 0, k = 0;
//	L = (SqList*)malloc(sizeof(SqList));
//	while (i < n)
//		//i扫描a中元素
//	{
//		L->data[k] = a[i];
//		k++; i++;
//		//k	记录插入到L	中的元素个数
//	}
//	L->length = k;
//}
//void move(SqList*& L) {
//	int i = 0, j = L -> length - 1;
//	ElemType temp;
//	while (i <= j)
//	{
//		//从前向后找偶数
//		while (i < j && L->data[i] % 2 != 0) {
//			i++;
//		}
//		//从后向前找奇数
//		while (i < j && L->data[j] % 2 == 0) {
//			j--;
//		}
//		if (i < j)
//		{	
//			swap(L->data[i], L->data[j]);
//			i++, j--;
//		}
//	}
//
//}
//void Merge(SqList *&A, SqList *&B, SqList *&C)	//C为引用型参数
//{
//	int i = 0, j = 0, k = 0;	//k记录顺序表C中的元素个数
//	// 1. 两表元素两两比较，小的先放入 C
//	while (i < A->length && j < B->length) {
//		if (A->data[i] <= B->data[j]) {
//			C->data[k++] = A->data[i++];
//		}
//		else {
//			C->data[k++] = B->data[j++];
//		}
//	}
//
//	// 2. A 中剩余的直接复制到 C
//	while (i < A->length) {
//		C->data[k++] = A->data[i++];
//	}
//	// 3. B 中剩余的直接复制到 C
//	while (j < B->length) {
//		C->data[k++] = B->data[j++];
//	}
//	C -> length = k;			//指定顺序表C的实际长度
//}
//
//void main()
//{
//	cout << "241400003617 安晨阳 实验一 \n";
//	SqList* L1 = NULL; 
//	InitList(L1);          // 初始化顺序表
//	SqList* L2 = NULL;
//	InitList(L2);
//	SqList* L3 = NULL;
//	InitList(L3);
//	int a[] = { 1, 9, 15, 27 };
//	int b[] = { 2, 7, 18, 24, 30 };
//	CreateList(L1, a, 4);
//	CreateList(L2, b, 5);
//	cout << "递增有序顺序表L1 : ";
//	DispList(*L1);
//	cout << "递增有序顺序表L2 : ";
//	DispList(*L2);
//	cout << "L1、L2二路归并到L3 : ";
//	Merge(L1, L2, L3);
//	DispList(*L3);
//	// 销毁
//	DestroyList(L1);
//	DestroyList(L2);
//	DestroyList(L3);
//}
