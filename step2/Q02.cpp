#include <iostream>

using namespace std;

int main() {
	int score;	// 시험점수를 입력받았다고 가정
	cin >> score;	 
	if(score >= 90){	// 주어지는 입력은 100을 넘지 않기 때문에 score <= 100 필요 없음
		cout << "A";
	} 
	else if(score >= 80){	// 90점 이상은 자연스레 걸러진다.
		cout << "B";
	} 
	else if(score >= 70){	// 80점 이상은 자연스레 걸러진다.
		cout << "C";
	} 
	else if(score >= 60){	// 70점 이상은 자연스레 걸러진다.
		cout << "D";
	} 
	else {	// 60점 이상은 자연스레 걸러진다.
		cout << "F";
	}
	
	return 0;
}
