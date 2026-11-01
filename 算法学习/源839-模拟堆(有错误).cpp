//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100010;
//int h[N];//堆
//int ph[N];//ph[i] 第i个插入的数的在堆中的下标是ph[i];
//int hp[N];//hp[i] 堆中下标是i的数是第hp[i]插入的
//int cnt;//堆的大小
//int n,m;
//void head_swap(int a, int b) {//交换堆中下标是a和b的元素
//	swap(ph[hp[a]], ph[hp[b]]);
//	swap(hp[a], hp[b]);
//	swap(h[a], h[b]);
//
//}
//void down(int u) {
//	int t = u;
//	if (2 * u <= cnt && h[2 * u] < h[t])t = 2 * u;
//	if (2 * u + 1 <= cnt && h[2 * u + 1] < h[t])t = 2 * u + 1;
//	if (u != t) {
//		head_swap(u, t);
//		down(t);
//	}
//}
//void up(int u) {
//	while (u / 2 > 0 && h[u / 2] > h[u]) {
//		head_swap(u, u / 2);
//		u /= 2;
//	}
//}
//
//int main() {
//	cin >> n;//n个操作
//
//	while (n--) {
//		string op;
//		int k, x;
//		cin >> op;
//		if (op == "I") {//插入x
//			cin >> x;
//			cnt++, m++;//m表示第几个插入的
//			h[cnt] = x;
//			ph[m] = cnt;
//			hp[cnt] = m;
//			up(cnt);
//		}
//		else if (op == "PM") {//输出集合的最小值
//			cout << h[1] << endl;
//		}
//		else if(op == "DM"){//删除集合中的最小值
//			//h[1] = h[cnt];
//			head_swap(1, cnt);
//			cnt--;
//			down(1);
//		}
//		else if (op == "D") {//删除第k个插入的数
//			cin >> k;
//			k = ph[k];
//			head_swap(k, cnt);
//			cnt--;
//			down(k);
//		}
//		else {//修改第k个插入的数为x;
//			cin >> k >> x;
//			k = ph[k];//第k个插入的数在堆中的下标为ph[k]
//
//			h[k] = x;
//
//			down(k), up(k);
//		}
//	}
//
//
//
//
//	return 0;
//}