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
	cin >> H >> W >> X >> Y; // ��, ��, �Ʒ� ������, ������ ������

	input_B(); // B�迭�� �Է¹ް�
	recover_A(); // A�迭�� �����ϰ�
	print_A(); // A�迭 ���

	return 0;
}
