#include<bits/stdc++.h>
using namespace std;
int main() {

	int votea, voteb;
	cin >> votea >> voteb;
	int v1, v2, v3;
	cin >> v1 >> v2 >> v3;
	int vva = (v1 == 0) + (v2 == 0) + (v3 == 0);
	int vvb = (v1 == 1) + (v2 == 1) + (v3 == 1);
	if (votea > voteb && vva >= 1) {
		cout << "The winner is a: "<<votea<<" + "<<vva << endl;
	}
	else if (votea < voteb && vva == 3) {
		cout << "The winner is a: " << votea << " + " << vva << endl;
	}
	else {
		cout << "The winner is b: " << voteb << " + " << vvb << endl;
	}

	return 0;
}