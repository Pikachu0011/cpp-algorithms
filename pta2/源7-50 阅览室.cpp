#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 1e5;
struct node {
	int h;
	int m;
	int v;标记书是否被借，否为0；
	node() {
		h = 0;
		m = 0;
		v = 0;
	}结构体重构（初始化结构体）
}s[1005];
int main() {
	int n;
	cin >> n;
	int fl = 1;
	int g;
	char c;
	int hh, mm;
	int cnt = 0 , sum = 0;有效借书次数 有效借书时间
	while (scanf("%d %c %d:%d", &g, &c, &hh, &mm)) {
		if (g == 0) {
			if (cnt != 0) {
				cout << cnt << " " << round((1.0 * sum / cnt)) << endl;
			}
			else {
				cout << 0 << " " << 0 << endl;
			}
			if (fl == n)break;
			cout << fl << endl;
			cnt = 0, sum = 0;
			fl++;
			
			continue;
		}
		
		if (c == 'S') {
			s[g].h = hh;
			s[g].m = mm;
			s[g].v = fl + 1;
		}
		else {c=='E'
			if (s[g].v != fl + 1) {
				continue;
			}
			s[g].v = 0;
			cnt++;
			sum = sum + (hh - s[g].h - 1) * 60 + (60 - s[g].m) + mm;
		}
		
	}
	
	cout<<round((1.0*sum / cnt));
	return 0;
}