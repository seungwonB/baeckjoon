#include <iostream>

using namespace std;
//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
int main() {
	int num;
	int x, y;
	cin >> num;

	for(int i=0;i<num;i++){
		cin >> x >> y;
		
		cout << "Case #" << i+1 << ": " << x << " + " << y << " = " << x + y << "\n";
		
	}
	
}
