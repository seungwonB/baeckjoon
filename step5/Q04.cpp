#include <iostream>

using namespace std;
//�� �ڿ��� A�� B�� ���� ��, A%B�� A�� B�� ���� ������ �̴�. ���� ���, 7, 14, 27, 38�� 3���� ���� �������� 1, 2, 0, 2�̴�. 
//�� 10���� �Է¹��� ��, �̸� 42�� ���� �������� ���Ѵ�. �� ���� ���� �ٸ� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num, cnt = 0;
	int array[42] = { 0 };
	
	for(int i=0;i<10;i++) {
		cin >> num;
		if(!array[num%42]++) cnt++;
	}
	cout << cnt;
	
}