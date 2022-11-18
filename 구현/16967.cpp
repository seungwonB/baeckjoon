#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

int H, W, X, Y;
int B[601][601];

void input_B() {
	for (int i = 0; i < H + X; i++) {
		for (int j = 0; j < W + Y; j++) {
			cin >> B[i][j];
		}
	}
}

void recover_A() {
	for (int i = X; i < H; i++) {
		for (int j = Y; j < W; j++) {
			B[i][j] -= B[i - X][j - Y];
		}
	}
}

void print_A() {
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cout << B[i][j] << " ";
		}
		cout << "\n";
	}
}

int main() {
	cin >> H >> W >> X >> Y; // 행, 열, 아래 움직임, 오른쪽 움직임

	input_B(); // B배열을 입력받고
	recover_A(); // A배열을 복원하고
	print_A(); // A배열 출력

	return 0;
}
