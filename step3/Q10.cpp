#include <iostream>

using namespace std;
//ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
//������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.
int main() {
	int num;
	cin >> num;
	
	for(int i = 1; i <= num; i++) {
		for(int j = num; j > i; j--) {
			cout << " ";
		}
		for(int k = 0; k < i; k++) {
			cout << "*";
		}
		cout << "\n";
	}
	
}
