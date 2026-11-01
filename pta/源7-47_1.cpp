#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;//行数
    string str;
    string ss[n];
    cin >> n;
    getchar(); //老规矩，用getline读取字符串时要去除回车
    getline(cin, str);
    for (int i = 0; i < n; i++)
        for (int j = i; j < str.size(); j += n) //因为每行n个数，所以读取时，过n个读一次
            ss[i] += str[j];

    for (int i = 0; i < n; i++)
    {
        if (ss[i].size() < ss[0].size()) cout << " "; //最后一列缺字符时，用空格补上
        //这里< ss[0].size(),是以第一行的长度为基准
        for (int j = ss[i].size() - 1; j >= 0; j--)  // 倒叙枚举每个字符串
            cout << ss[i][j];

        cout << endl;
    }
    return 0;
}