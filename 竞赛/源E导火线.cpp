//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 5;
//int a[N];//长度
//int b[N];//速度
//double c[N];//每一段所需时间
//int main() {
//	int n;
//	cin >> n;
//	double time = 0;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i] >> b[i];
//		c[i] = (double)a[i] / (double)b[i];
//		time += c[i];
//
//	}
//	time /= 2;
//	double now=0;
//	int k = 1;
//	double res = 0;
//	while (now < time && now + c[k] < time) {
//		now += c[k];
//		res += a[k];
//		k++;
//	}
//	res += (time - now) * b[k];
//	cout << res << endl;
//
//	return 0;
//}