#include <iostream>

using namespace std;

int main() {
	int score;	// ���������� �Է¹޾Ҵٰ� ����
	cin >> score;	 
	if(score >= 90){	// �־����� �Է��� 100�� ���� �ʱ� ������ score <= 100 �ʿ� ����
		cout << "A";
	} 
	else if(score >= 80){	// 90�� �̻��� �ڿ����� �ɷ�����.
		cout << "B";
	} 
	else if(score >= 70){	// 80�� �̻��� �ڿ����� �ɷ�����.
		cout << "C";
	} 
	else if(score >= 60){	// 70�� �̻��� �ڿ����� �ɷ�����.
		cout << "D";
	} 
	else {	// 60�� �̻��� �ڿ����� �ɷ�����.
		cout << "F";
	}
	
	return 0;
}
