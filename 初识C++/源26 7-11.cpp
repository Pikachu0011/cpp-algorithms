#include<iostream>
using namespace std;
int main() {
	int hh, mm;
	scanf("%d:%d", &hh, &mm);
	if (hh >=13) {
		if (mm == 0) {
			for (int i = 1; i <= hh-12; i++) {
				printf("Dang");
			}
		}
		else {
			for (int i = 1; i <= hh+1-12; i++) {
				printf("Dang");
			}
		}
		
	}
	else if (hh <= 11) {
		printf("Only %02d:%02d.  Too early to Dang.",hh,mm);
	}
	else if (hh == 12 && mm == 0) {
		printf("Only %02d:%02d.  Too early to Dang.", hh, mm);
	}
	else {
		for (int i = 1; i <= 13; i++) {
			printf("Dang");
		}
	}




	return 0;
}