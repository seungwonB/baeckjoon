#include <cstdio>
#include <stack>

using namespace std;

int main() {
	int test_case, value, sum = 0;
	scanf("%d", &test_case);
	stack<int> s;

	for (int i = 0; i < test_case; i++) {
		scanf("%d", &value);
		
		if (value == 0) {
			if(!s.empty())
				s.pop();
		}
		else {
			s.push(value);
		}	
	}

	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}

	printf("%d", sum);
	return 0;
}
