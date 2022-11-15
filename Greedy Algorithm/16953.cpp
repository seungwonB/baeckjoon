#include <cstdio>
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int A, B, cnt = 1;

void AtoB() {
	while (B > A) {
		if (B % 10 == 1) {
			B /= 10;
		}
		else if (B % 2 == 0) {
			B /= 2;
		}
		else {
			B = 0;
			break;
		}
		cnt++;
	}
}

int main() {
	cin >> A >> B;
	AtoB();
	if (B < A) cout << -1;
	else cout << cnt;
}
