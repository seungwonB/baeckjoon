#include <iostream>

using namespace std;
//�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
int main() {
	int num;
	int x, y;
	cin >> num;

	for(int i=0;i<num;i++){
		cin >> x >> y;
		
		cout << "Case #" << i+1 << ": " << x << " + " << y << " = " << x + y << "\n";
		
	}
	
}
