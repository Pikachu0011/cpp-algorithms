#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

string s1;
stack<char> sa;

int main() {
    cin >> s1;
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] != ')')
			sa.push(s1[i]);
		else {
			int a = 0, m = 0;
			while (!sa.empty() && sa.top() != '(') {
				if (sa.top() == '|') {
					m = max(m, a);
					a = 0;
				}
				else if (sa.top() == 'x') {
					a++;
				}
				sa.pop();
			}
			if (!sa.empty() && sa.top() == '(') {
				sa.pop();
			}
			m = max(m, a);
			while (m--)
				sa.push('x');
		}
	}
	int a = 0, m = 0;
	while (!sa.empty()) {
		if (sa.top() == '|') {
			m = max(m, a);
			a = 0;
		}
		else if (sa.top() == 'x') {
			a++;
		}
		sa.pop();
	}
	m = max(m, a);
	cout << m << endl;
    return 0;
}
/*
((xx|xxx)x|(x|xx))xx	stack	a	m
						    	0	0
						   x
                           x
                           x
                           x
                           

						
							
						
									
						
						
*/