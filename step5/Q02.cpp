#include <iostream>

using namespace std;
//9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ��� ã��
//�� �ִ��� �� ��° �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� ���, ���� �ٸ� 9���� �ڿ���
//3, 29, 38, 12, 57, 74, 40, 85, 61

�� �־�����, �̵� �� �ִ��� 85�̰�, �� ���� 8��° ���̴�.
int main() {
	int array[9];
	int idx, max;
	for(int i=1;i<=9;i++) {
		cin >> array[i];
	}
	max = array[0];
	for(int i=1;i<=9;i++) {
		if(array[i] > max){
			max = array[i];
			idx = i;
		}
	}
	cout << max << "\n" << idx;
}
