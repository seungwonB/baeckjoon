#include <cstdio>

int main() {	
	// Á¡È­½Ä
	int zero[41] = { 1, 0, };
	int one[41] = { 0, 1, };
	int test_case, n;

	scanf("%d", &test_case);
	for (int i = 0; i < test_case; i++) {
		scanf("%d", &n);
		for (int j = 2; j <= n; j++) {
			zero[j] = zero[j - 1] + zero[j - 2];
			one[j] = one[j - 1] + one[j - 2];
		}
		printf("%d %d\n", zero[n], one[n]);
	}

	return 0;
}
