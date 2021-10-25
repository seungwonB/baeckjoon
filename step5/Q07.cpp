#include <iostream>

using namespace std;
//대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다
int main() {
	int case_num, s_num;
	double percent;
	int sum, avg;
	int cnt;
	int score[1001] = { 0 };
	cin >> case_num;
	
	for(int i = 0; i < case_num; i++) {
		sum = 0;
		avg = 0;
		cnt = 0;
		cin >> s_num;
		
		for(int j = 0; j < s_num; j++) {
			cin >> score[j];
			sum += score[j];
		}
		avg = sum / s_num;
		for(int k = 0; k < s_num; k++) {
			if (score[k] > avg) {
				cnt++;
			}
		}
		percent = (double)cnt / s_num * 100;
		cout << fixed;
		cout.precision(3);
		cout << percent << "%" << "\n";
	}
}
