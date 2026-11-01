#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n; string s;
    cin >> n;
    getchar();
    while (n--)
    {
        int q = 0; int w = 0;
        getline(cin, s);
        int a = s.find("ong,");
        int b = s.rfind("ong.");
        if (a == -1 || b == -1 || a == b) { cout << "Skipped" << endl; continue; }
        else
        {
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] == ' ' && q == 0)
                {
                    w = i;
                    s.replace(i + 1, s.size() - i - 2, "zhong"); q++;
                }
                else if (s[i] == ' ' && q == 1)
                {
                    s.replace(i + 1, w - i - 1, "ben"); q++; w = i;
                }
                else if (s[i] == ' ' && q == 2)
                {
                    s.replace(i + 1, w - i - 1, "qiao"); q++; break;
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}