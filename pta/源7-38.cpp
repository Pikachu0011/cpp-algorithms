#include<bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main() {
	int arr[100000];

	int nn;
	cin >> nn;
	int index = 0;
	for (int i = 0; i < nn; i++) {
		int kk;
		cin >> kk;
		
		for (int j = 0; j < kk; j++) {
			cin >> arr[index];
			index++;
		}
	}
	for (int i = 0; i < index; i++) {
		printf("%05d ", arr[i]);
	}
	int m;
	cin >> m;
	int arr2[10000];
	for (int i = 0; i < m; i++) {
		cin >> arr2[i];
	}
	//int maxx = max(m, index + 1);
	int flag = 0;
	
	int index2=0;
	unordered_set <int> st;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < index; j++) {
			if (arr2[i] == arr[j]) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			st.insert(arr2[i]);
		}
		flag = 0;

		
	}
	
	if (st.empty() == 1) {
		cout << "No one is handsome" << endl;
	}
	else {
		for (auto& ele : st) {
			cout << ele << " ";
		}
	}
	
	
	return 0;
}