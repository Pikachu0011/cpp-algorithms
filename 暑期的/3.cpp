#include<bits/stdc++.h>
using namespace std;
#define int long long 
struct f {
	int stu1;
	int stu2;
	int stu3;
	int num;
};
f  fun[10];
void suan(int* a, int* b,int c) {
	int ta = *a,tb = *b, tc = c;
	if (abs(ta - tb) >= tc) {
		if (ta > tb)tb += tc;
		if (ta < tb)ta += tc;
	}
	else  if(abs(ta - tb) < tc && abs(ta - tb) != 0){
		if (ta > tb) {
			tb += (ta - tb);
			tc -= (ta - tb);
			if (tc % 2 == 0) {
				ta += tc / 2;
				tb += tc / 2;
			}
			else {
				ta += tc / 2 + 1;
				tb += tc / 2;
			}
		}
		else {
			ta += (tb - ta);
			tc -= (tb - ta);
			if (tc % 2 == 0) {
				ta += tc / 2;
				tb += tc / 2;
			}
			else {
				ta += tc / 2 + 1;
				tb += tc / 2;
			}
		}
	}
	else {
		if (tc % 2 == 0) {
			ta += tc / 2;
			tb += tc / 2;
		}
		else {
			ta += tc / 2 + 1;
			tb += tc / 2;
		}
	}
	*a = ta, * b = tb;
	
}
bool cmp(f a, f b) {
	int anum1 = (a.stu1 == 1) + (a.stu2 == 1) + (a.stu3 == 1);
	int bnum1 = (b.stu1 == 1) + (b.stu2 == 1) + (b.stu3 == 1);
	if (anum1 != bnum1)return anum1 < bnum1;
	else a.num > b.num;
}
void suan3(int* a, int* b, int* c, int num) {
	int ta = *a, tb = *b, tc = *c;
	int arr[3] = { ta,tb,tc};
	sort(arr, arr + 3);
	if (arr[1] - arr[0] >= num) {
		arr[0] += num;
	}
	else if (arr[1] != arr[0]) {
		arr[0] += (arr[1] - arr[0]);
		num -= (arr[1] - arr[0]);
	}
	else if (arr[0] == arr[1] && arr[2] - arr[0] >= num) {
		arr[0] += num/2 + (num%2 == 1);
		arr[1] += num / 2;
	}
	else {
		arr[0] += (arr[1] - arr[0]);
		num -= (arr[1] - arr[0]);

	}
	*a = arr[0], * b = arr[1], * c = arr[2];

}
void solve() {
	int s;
	cin >> s;
	for (int i = 1; i <= 7; i++) {
		cin >> fun[i].num;
	}
	sort(fun + 1, fun + 8, cmp);
	int t1 = 0, t2 = 0, t3 = 0;
	for (int i = 1; i <= 7; i++) {
		//cout << fun[i].num << endl;
		f a = fun[i];
		int anum1 = (a.stu1 == 1) + (a.stu2 == 1) + (a.stu3 == 1);
		if (anum1 == 1) {
			if (a.stu1) {
				t1 += a.num;
			}
			if (a.stu2) {
				t2 += a.num;
			}
			if (a.stu3) {
				t3 += a.num;
			}
		}
		else if (anum1 == 2) {
			if (a.stu1 && a.stu2) {
				suan(&t1, &t2, a.num);
			}
			if (a.stu2 && a.stu3) {
				suan(&t2, &t3, a.num);
			}
			if (a.stu1 && a.stu3) {
				suan(&t1, &t3, a.num);
			}
		}
		else if (anum1 == 3) {
			suan3(&t1, &t2, &t3, a.num);
		}
	}
	cout << t1 << endl;

}
signed main() {

	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin >> t;
	fun[1].stu1 = 1;
	fun[2].stu2 = 1;
	fun[3].stu1 = 1, fun[3].stu2 = 1;
	fun[4].stu3 = 1;
	fun[5].stu1 = 1, fun[5].stu3 = 1;
	fun[6].stu2 = 1, fun[6].stu3 = 1;
	fun[7].stu1 = fun[7].stu2 = fun[7].stu3 = 1;
	while (t--) {
		solve();
	}
	return 0;
}
