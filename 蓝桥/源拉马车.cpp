#include<iostream>
#include<queue>
#include<stack>
#include<cstring>
using namespace std;
queue<char>a, b;
stack<char>s;
string s1, s2;
int check[100];
int order = 1;
int main()
{
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        a.push(s1[i]);
    }
    for (int i = 0; i < s2.length(); i++)
    {
        b.push(s2[i]);
    }
    while (!a.empty() && !b.empty())
    {

        if (order == 1)
        {
            s.push(a.front());
            a.pop();
            if (check[s.top()])
            {

                char tmp = s.top();
                a.push(s.top());
                s.pop();
                while (s.top() != tmp)
                {
                    a.push(s.top());
                    check[s.top()] = 0;
                    s.pop();
                }
                a.push(tmp);
                check[tmp] = 0;
                s.pop();
            }
            else
            {
                order = 0;
                check[s.top()] = 1;
            }
        }
        else
        {
            s.push(b.front());
            b.pop();
            if (check[s.top()])
            {
               
                char tmp = s.top();
                b.push(tmp);
                s.pop();
                while (s.top() != tmp)
                {
                    b.push(s.top());
                    check[s.top()] = 0;
                    s.pop();
                }
                b.push(tmp);
                check[tmp] = 0;
                s.pop();

            }
            else
            {
                order = 1;
                check[s.top()] = 1;
            }
        }
    }
    while (!a.empty())
    {
        cout << a.front();
        a.pop();
    }
    while (!b.empty())
    {
        cout << b.front();
        b.pop();
    }
    return 0;
}