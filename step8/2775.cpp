#include <cstdio>

int main() {
	int test_case, floor, room;
	scanf("%d", &test_case);
	
	for (int i = 0; i < test_case; i++) {
		scanf("%d %d", &floor, &room);
		int apart[floor + 1][room] = { 0, } ;
		
		for (int k = 0; k < room; k++) {
			apart[0][k] = k+1;
		}

		for (int m = 1; m <= floor; m++) {
			for (int n = 0; n < room; n++) {
				if (n == 0) {
					apart[m][n] = 1;
				}
				else {
					apart[m][n] = apart[m][n - 1] + apart[m - 1][n];
				}
			}
		}

		printf("%d\n", apart[floor][room - 1]);
	}
}
