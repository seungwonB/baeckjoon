#include <iostream>

using namespace std;
//�����̴� �⸻��縦 ���ƴ�. �����̴� ������ �����ؼ� ���� ��������� �ߴ�. 
//�ϴ� �����̴� �ڱ� ���� �߿� �ִ��� �����. �� ���� M�̶�� �Ѵ�. �׸��� ���� ��� ������ ����/M*100���� ���ƴ�.
//���� ���, �������� �ְ����� 70�̰�, ���������� 50�̾����� ���������� 50/70*100�� �Ǿ� 71.43���� �ȴ�.
//�������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num;
	double sum;
	double max;
	cin >> num;
	double score[num];
	
	for(int i=0;i<num;i++) {
		cin >> score[i];
	}
	max = score[0];
	for(int i=0;i<num;i++) {
		if (score[i] > max)
			max = score[i];
	}
	for(int i=0;i<num;i++) {
		sum += score[i] / max * 100;
	}
	cout << sum/num;
}
