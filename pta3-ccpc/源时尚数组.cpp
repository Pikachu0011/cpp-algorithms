#include<bits/stdc++.h>

using namespace std;
const int N = 55;
int arr[N];
int n,m;


int get(int i, int j,int cnt) {
	//cout << i << " " << j << endl;
	if ((arr[i] + arr[j]) % 2 != 0) {

		return min(get(i + 1, j, cnt + 1), get(i, j - 1, cnt + 1));

	}
	else return cnt;
}
int main() {
	cin >> n;
	while (n--) {
		cin >> m;
		for (int i = 1; i <= m; i++)cin >> arr[i];
		
		sort(arr + 1, arr + 1 + m);
		//for (int i = 1; i <= m; i++)cout << arr[i] << " ";
		//i = 1, j = n;
		//cout << endl;
		
		cout << get(1, m, 0) << endl;
		//cout << "-------------------------------" << endl;
	}
	
	



	return 0;
}