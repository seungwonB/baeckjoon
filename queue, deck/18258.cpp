#include <iostream>

using namespace std;

int queue[2000001];
int start = 0;
int queue_size = 0;

void push(int value) {
	queue_size++;
	queue[start + queue_size - 1] = value;
}

void pop() {
	if (queue_size == 0) cout << -1 << "\n";
	else {
		cout << queue[start] << "\n";
		start++;
		queue_size--;
	}
}

void empty() {
	if (queue_size == 0) cout << 1 << "\n";
	else cout << 0 << "\n";
}

void GetBack() {
	if (queue_size == 0) cout << -1 << "\n";
	else cout << queue[start + queue_size - 1] << "\n";
}

void GetFront() {
	if (queue_size == 0) cout << -1 << "\n";
	else cout << queue[start] << "\n";
}

int main() {
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int order_length, value;
	string order;
	cin >> order_length;


	for (int i = 0; i < order_length; i++) {
		cin >> order;

		if (order == "push") {
			cin >> value;
			push(value);
		}
		else if (order == "pop") {
			pop();
		}
		else if (order == "empty") {
			empty();
		}
		else if (order == "back") {
			GetBack();
		}
		else if (order == "front") {
			GetFront();
		}
		else if (order == "size") {
			cout << queue_size << "\n";
		}
	}
	return 0;
}
