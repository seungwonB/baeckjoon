#include <cstdio>
#include <stack>
#include <iostream>

using namespace std;

int main() {
	int test_case;
	bool flag;
	string str;

	scanf("%d", &test_case);

	for (int i = 0; i < test_case; i++) {
		stack<char> s;
		cin >> str;
		flag = true;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(')
				s.push(str[i]);
			else
				if (!s.empty())
					s.pop();
				else {
					flag = false;
				}
		}

		if (flag && s.empty())
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}
