#include <cstdio>

int main() {
	int test_case, temp;
	scanf("%d", &test_case);
	int values[test_case];
	
	for (int i = 0; i < test_case; i++) {
		scanf("%d", &values[i]);
	}

	for (int i = 0; i < test_case; i++) {
		for (int j = i + 1; j < test_case; j++) {
			if (values[i] > values[j]) {
				temp = values[j];
				values[i] = temp;
				values[j] = values[i];
			}
		}
	}

	for (int i = 0; i < test_case; i++) {
		printf("%d\n", values[i]);
	}
	return 0;
}
