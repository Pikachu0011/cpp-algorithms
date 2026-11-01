#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;//录入字符串
    getline(cin, s);
    int k = 0;//计数器
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '6')//为6时候计数器+1
            k++;
        else
        {
            if (k <= 3)//6小于等于3时原样输出
                for (int j = 0; j < k; j++)
                    cout << '6';
            else if (k > 3 && k <= 9)//3-9时候输出9
                cout << '9';
            else//大于9就输出27
                cout << "27";
            k = 0;
            cout << s[i];
        }
    }
    if (k > 0)//考虑最后一连串都是6
    {
        if (k <= 3)
            for (int j = 0; j < k; j++)
                cout << '6';
        else if (k > 3 && k <= 9)
            cout << "9";
        else
            cout << "27";
    }
    return 0;
}

