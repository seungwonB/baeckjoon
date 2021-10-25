#include <iostream>

using namespace std;
//N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
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
