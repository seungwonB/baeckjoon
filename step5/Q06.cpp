#include <iostream>

using namespace std;
//"OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�. 
//������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�. ���� ���, 10�� ������ ������ 3�� �ȴ�.
//"OOXXOXXOOO"�� ������ 1+2+0+0+1+0+0+1+2+3 = 10���̴�.
//OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num;
	int sum;
	cin >> num;
	string str[num];
	int j = 0;
	int cnt=0;
	for(int i=0;i<num;i++) {
		cin >> str[i]; 
	}
	for(int i=0;i<num;i++){
		while(str[i][j] != NULL) {
			if (str[i][j] == 'O') {
				cnt++;
				sum += cnt;
			} else if (str[i][j] == 'X'){
				cnt = 0;
			}
			j++;
		}
		cout << sum << '\n';
		sum = 0;
		j = 0;
		cnt = 0;
	}
	
}
