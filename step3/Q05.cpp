#include <iostream>

using namespace std;
//자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
int main() {
	int num;
	cin >> num;
	
	for(int i=1; i<=num; i++) {
		cout << i << "\n";
	}
	
}
