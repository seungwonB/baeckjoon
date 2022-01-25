#include <cstdio>	

int main() {
	int test_case, rank;
	scanf("%d", &test_case);
	int info[test_case][2];

	for (int i = 0; i < test_case; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &info[i][j]);
		}
	}

	for (int i = 1; i <= test_case; i++) {
		rank = 1;
		for (int j = 0; j < test_case; j++) {
			if (info[i - 1][0] < info[j][0]) {
				if (info[i - 1][1] < info[j][1]) {
					rank++;
				}
			}
		}
		printf("%d ", rank);
	}
	return 0;
}
