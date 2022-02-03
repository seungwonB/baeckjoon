#include <cstdio>
#include <queue>

using namespace std;

int test_case, idx;
queue<int> q;

void Enqueue() {
	for (int i = 1; i <= test_case; i++) {
		q.push(i);
	}
}

void Josephus(int arr[]) {
	int k = 0;

	while (!q.empty()) {
		for (int i = 0; i < idx - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		arr[k] = q.front();
		q.pop();
		k++;
	}
}

void print(int arr[]) {
	printf("<");
	for (int i = 0; i < test_case; i++) {
		if (i == test_case - 1) {
			printf("%d>", arr[i]);
		}
		else
			printf("%d, ", arr[i]);
	}
}

int main() {
	scanf("%d %d", &test_case, &idx);
	int arr[test_case];

	Enqueue();
	Josephus(arr);
	print(arr);
	
	return 0;
}
