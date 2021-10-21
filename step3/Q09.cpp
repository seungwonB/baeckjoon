#include <iostream>

using namespace std;
//첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
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
