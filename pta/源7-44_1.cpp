//#include<iostream>
//#include<string>
//#include<set>
//
//using namespace std;
//int main()
//{
//	int y = 0, n = 0;
//	cin >> y >> n;
//	for (int i = y; i < y + 100; i++)
//	{
//		string y_i = to_string(i);
//		if (y_i.length() < 4)
//		{
//			string temp;
//			for (int j = 0; j < 4 - y_i.length(); j++)
//			{
//				temp = temp + "0";
//			}
//			y_i = temp + y_i;
//		}
//		set<char> temp;
//		for (int j = 0; j < y_i.length(); j++)
//		{
//			temp.insert(y_i[j]);
//		}
//		if (temp.size() == n)
//		{
//			printf("%d %04d", i - y, i);
//			break;
//		}
//	}
//}