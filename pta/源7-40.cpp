#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[6], b[6], wei1 = 0, wei2 = 0, space = 0, error1 = 0, error2 = 0;

	fill(a, a + 6, 0);
	fill(b, b + 6, 0);

	char op;
	string str;
	getline(cin, str);

	space = str.find(" ", 0);
	//cout<<space<<endl;
	for (int i = 0; i < space; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			a[wei1] = str[i] - '0';
			wei1++;
		}
		else
		{
			error1++;
			break;
		}
	}

	for (int i = space + 1; str[i]; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			b[wei2] = str[i] - '0';
			wei2++;
		}
		else
		{
			error2++;
			break;
		}
	}

	//¶¼ÊÇÊý×Ö
	int a1 = 0, b1 = 0, sum = 0;
	for (int i = 0; i < wei1; i++)
	{
		a1 = a1 * 10 + a[i];
	}

	for (int i = 0; i < wei2; i++)
	{
		b1 = b1 * 10 + b[i];
	}

	sum = a1 + b1;

	if (a1 > 1000 || a1 == 0) error1 = 1;
	if (b1 > 1000 || b1 == 0) error2 = 1;

	if (error1 == 0 && error2 == 0)
	{
		cout << a1 << " + " << b1 << " = " << sum;
	}

	else
	{
		if (error1 == 1) cout << "?";
		else cout << a1;

		cout << " + ";

		if (error2 == 1) cout << "?";
		else cout << b1;

		cout << " = ?";

	}
	return 0;
}
