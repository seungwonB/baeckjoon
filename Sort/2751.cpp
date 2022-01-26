#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int test_case;
	scanf("%d", &test_case);
	int numbers[test_case];

	for (int i = 0; i < test_case; i++){
		scanf("%d", &numbers[i]);
	}
	sort(numbers, numbers + test_case);

	for (int i = 0; i < test_case; i++) {
		printf("%d\n", numbers[i]);
	}
}
