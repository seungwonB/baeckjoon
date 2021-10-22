#include <iostream>

using namespace std;
//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
int main() {
	int x, y;
	
	while (true) {
		cin >> x >> y;
		if (x==0 && y==0) 
			break;
		cout << x+y << "\n";
	}
}
