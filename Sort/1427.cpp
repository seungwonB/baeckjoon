#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string str;
	cin >> str;
	
	int size = str.length();
	int res[size];

	for (int i = 0; i < size; i++) {
		res[i] = str[i] - '0';
	}
	sort(res, res + size, greater<>());

	for (int i = 0; i < size; i++) {
		printf("%d", res[i]);
	}
}
