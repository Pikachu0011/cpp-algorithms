#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, sum = 0;
    cin >> n;
    string a, b;
    getchar();
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        getline(cin, a);
        b = a;
        for (int j = 0; j < 10; j++)
        {
            t = b.find("bug");
            if (t != -1)
            {
                int h = a.find("bug");
                a.replace(h, 3, "bug");
                b.erase(t, 3);
                sum += 1;
            }
            t = b.find("Bug");
            if (t != -1)
            {
                int h = a.find("Bug");
                a.replace(h, 3, "bug");
                b.erase(t, 3);
                sum += 1;
            }
            t = b.find("bUg");
            if (t != -1)
            {
                int h = a.find("bUg");
                a.replace(h, 3, "bug");
                b.erase(t, 3);
                sum += 1;
            }
            t = b.find("buG");
            if (t != -1)
            {
                int h = a.find("buG");
                a.replace(h, 3, "bug");
                b.erase(t, 3);
                sum += 1;
            }
            t = b.find("BUg");
            if (t != -1)
            {
                int h = a.find("BUg");
                a.replace(h, 3, "bug");
                b.erase(t, 3);
                sum += 1;
            }
            t = b.find("BuG");
            if (t != -1)
            {
                int h = a.find("BuG");
                a.replace(h, 3, "bug");
                b.erase(t, 3);
                sum += 1;
            }
            t = b.find("bUG");
            if (t != -1)
            {
                int h = a.find("bUG");
                a.replace(h, 3, "bug");
                b.erase(t, 3);
                sum += 1;
            }
            t = b.find("BUG");
            if (t != -1)
            {
                int h = a.find("BUG");
                a.replace(h, 3, "bug");
                b.erase(t, 3);
                sum += 1;
            }

        }
        if (sum > 3)
            cout << "Review Needed" << endl;
        else
            cout << a << endl;
    }
    return 0;
}