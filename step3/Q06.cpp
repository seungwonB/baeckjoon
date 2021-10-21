#include <iostream>
//자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

using namespace std;

int main() {
	int num;
	cin >> num;
	
	for(int i=num; i>=1; i--) {
		cout << i << "\n";
	}
	
}
