#include <iostream>

using namespace std;
//ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
int main() {
	int num;
	cin >> num;
	
	for(int i=1;i<=num;i++) {
		for(int j=1;j<=i;j++) {
			cout <<"*";
		}
		cout << "\n";
	
	}
	
}
