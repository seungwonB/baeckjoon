#include <iostream>

using namespace std;
//�� ���� �ڿ��� A, B, C�� �־��� �� A �� B �� C�� ����� ����� 
//0���� 9���� ������ ���ڰ� �� ���� ���������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� ��� A = 150, B = 266, C = 427 �̶�� A �� B �� C = 150 �� 266 �� 427 = 17037300 �� �ǰ�, 
//����� ��� 17037300 ���� 0�� 3��, 1�� 1��, 3�� 2��, 7�� 2�� ������.

int main() {
	int a, b, c;
	int res;
	int array[10] = { 0 };
	cin >> a >> b >> c;
	res = a * b * c;
	
	while(res != 0) {
		array[res % 10]+=1;
		res /= 10;
	}
	for(int i=0;i<10;i++){
		cout << array[i] << endl;
	}
}
