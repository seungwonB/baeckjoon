#include <iostream>

using namespace std;
//���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�
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
