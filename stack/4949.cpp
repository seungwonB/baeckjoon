#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	string str;
	bool flag;
	
	while (true) {
		stack<char> q;
		getline(cin, str);
		if (str == ".") break;
		flag = true;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				q.push(str[i]);
			}
			else if (str[i] == ')') {
				if (!q.empty() && q.top() == '(') 
					q.pop();
				else {
					flag = false;
				}
			}
			else if (str[i] == ']') {
				if (!q.empty() && q.top() == '[') 
					q.pop();
				else {
					flag = false;
				}
			}
		}

		if (flag && q.empty()) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}
