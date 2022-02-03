#include <cstdio>
#include <stack>

using namespace std;

int main() {
	int arr[1000000], ans[1000000];
	int test_case;
	stack<int> s;

	scanf("%d", &test_case);

	for (int i = 0; i < test_case; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = test_case - 1; i >= 0; i--) {
		// �ش� �ε����� ���� ���ÿ� �ִ� ������ �۾ƾߵ�.
		while (!s.empty() && s.top() <= arr[i])
			s.pop();

		if (s.empty()) // ����ִ� = �� ������ ���̴�.
			ans[i] = -1;
		else 
			ans[i] = s.top();

		s.push(arr[i]);
	}

	for (int i = 0; i < test_case; i++) {
		printf("%d ", ans[i]);
	}

	return 0;
}
