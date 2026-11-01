#include<bits/stdc++.h>
using namespace std;

#define MaxSize 100
typedef char ElemType;
typedef struct {
	ElemType data[MaxSize];
	int top;
} SqStack;
void InitStack(SqStack& st)		//st为引用型参数
{
	st.top = -1;
}
void DestroyStack(SqStack &st)
{
}

int Push(SqStack& st, ElemType x)
{
	if (st.top == MaxSize - 1)	//栈满
		return 0;
	else
	{
		st.top++;
		st.data[st.top] = x;
		return 1;
	}
}

int Pop(SqStack& st, ElemType& x)	//x为引用型参数
{
	if (st.top == -1)					//栈空
		return 0;
	else
	{
		x = st.data[st.top];
		st.top--;
		return 1;
	}
}

int GetTop(SqStack& st, ElemType& x)	//x为引用型参数
{
	if (st.top == -1)					//栈空
		return 0;
	else
	{
		x = st.data[st.top];
		return 1;
	}
}
bool Stackempty(SqStack& st) {
	return (st.top == -1);
}
int StackEmpty(SqStack st)
{
	if (st.top == -1) return 1;
	else return 0;
}
int Match(char exp[], int n)				//exp存放表达式
{
	SqStack st;							//定义一个顺序栈st
	InitStack(st);						//栈初始化
	int flag = 1, i = 0;
	char ch;
	while (i < n && flag == 1)				//遍历表达式exp
	{
		switch (exp[i])
		{
		case '(':
			Push(st, exp[i]);
			break;
		case '[':
			Push(st, exp[i]);
			break;
		case '{':
			Push(st, exp[i]);
			break;
		case ')':
			if (!Pop(st, ch) || ch != '(')flag = 0;
			break;
		case ']':
			if (!Pop(st, ch) || ch != '[')flag = 0;
			break;
		case '}':
			if (!Pop(st, ch) || ch != '{')flag = 0;
			break;
		default:
			break;
		}
		i++;
	}
	if (StackEmpty(st) && flag == 1)		//栈空且符号匹配则返回1
	{
		DestroyStack(st);				//销毁栈st
		return 1;
	}
	else
	{
		DestroyStack(st);				//销毁栈st
		return 0;						//否则返回0
	}
}
void display(char exp[])
{
	int n = strlen(exp);
	if (Match(exp, n))
		printf("  %s是匹配的表达式\n", exp);
	else
		printf("  %s不是匹配的表达式\n", exp);
}

void main() {
	cout << "安晨阳 241400003617 实验三\n";
	char s1[] = "([()])";
	char s2[] = "[{()]}";
	char s3[] = "{([])}";
	char s4[] = "([(])}";
	display(s1);
	display(s2);
	display(s3);
	display(s4);
}

