#include <iostream>

using namespace std;
//N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
int main() {
	int num, min, max;
	cin >> num;
	int array[num];
	for(int i=0;i<num;i++) {
		cin >> array[i];
	}
	min = array[0];
	max = array[0];
	for (int i=1;i<num;i++) {
		if(array[i] < min) {
			min = array[i];
		}
		if(array[i] > max) {
			max = array[i];
		}
	}
	cout << min << " " << max;
}
