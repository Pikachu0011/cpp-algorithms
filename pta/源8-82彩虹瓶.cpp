#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
//const int M  ;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 1; i <= k; i++) {
		int need = 1;
		stack<int> st;
		bool poss = true;
		//cout << st.size() << endl;
		for (int j = 1; j <= n; j++) {
			int temp;
			cin >> temp;
			//bool poss;
			if (need == temp) {
				need++;
				while (!st.empty() && need == st.top()) {
					need++;
					st.pop();

				}

			}
			else if (st.size() < m)
				st.push(temp);
			else {
				poss = false;
			}

			
		}
		if (poss && st.empty())
			cout << "Y" << endl;
		else
			cout << "No" << endl;
	}




	return 0;
}
/*
7  6  1  3  2  5  4
	st1		st2
	¼Ü1		¼Ü2
1
2
3	7
4	6
5	5
6	4
7	3				
8	2		
9	1		
*/