#include <cstdio>
#include <iostream>
using namespace std;

int stack[100000];
int top = -1;

void push(int value) {
	stack[++top] = value;
}

void pop() {
	if (top < 0) printf("%d\n", -1);
	else printf("%d\n", stack[top--]);
	
}

void empty() {
	if (top < 0) printf("%d\n", 1);
	else printf("%d\n", 0);
}

void GetTop() {
	if (top < 0) printf("%d\n", -1);
	else printf("%d\n", stack[top]);
}

int main() {
	int order_length, value;
	string order;
	scanf("%d", &order_length);

	for (int i = 0; i < order_length; i++) {
		cin >> order;

		if (order == "push") {
			scanf("%d", &value);
			push(value);
		}
		else if (order == "pop") {
			pop();
		}
		else if (order == "empty") {
			empty();
		}
		else if (order == "top") {
			GetTop();
		}
		else {
			printf("%d\n", top + 1);
		}
	}
	return 0;
}
